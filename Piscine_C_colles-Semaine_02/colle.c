/*
** main.c for  in /home/henon_t/colle2
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct 10 19:33:49 2015 Thomas Henon
** Last update Sun Oct 11 00:35:01 2015 Thomas Henon
*/

#include <stdlib.h>
#include "pos.h"

void		anime_odd_line(char *str, char *str_temp, char *c, int *delay)
{
  char		cur_char;

  cur_char = '!';
  while (cur_char <= *c)
    {
      my_putstr(str_temp);
      my_putchar('\r');
      usleep(*delay);
      str_temp[get_index(str, c)] = cur_char;
      cur_char = cur_char + 1;
    }
  usleep(*delay);
}

void		anime_even_line(char *str,
				char *str_temp,
				struct s_pos pos,
				int *delay)
{
  char		cur_char_left;
  char		cur_char_right;
  char		*left_char;
  char		*right_char;

  left_char = pos.left_char;
  right_char = pos.right_char;
  cur_char_left = '!';
  cur_char_right = '!';
  while (cur_char_left <= (*left_char) + 1 ||
	 cur_char_right <= *(right_char) + 1)
    {
      my_putstr(str_temp);
      my_putchar('\r');
      if (cur_char_left <= *left_char)
	str_temp[get_index(str, left_char)] = cur_char_left;
      if (cur_char_right <= *right_char)
	str_temp[get_index(str, right_char)] = cur_char_right;
      usleep(*delay);
      cur_char_left = cur_char_left + 1;
      cur_char_right = cur_char_right + 1;
    }
  usleep(*delay);
}

char		*init_str_temp(char *str, char *str_temp)
{
  int		i;

  str_temp = malloc(my_strlen(str) + 1);
  if (!str_temp)
    return (0);
  i = 0;
  while (i < my_strlen(str))
    {
      str_temp[i] = ' ';
      i = i + 1;
    }
  return (str_temp);
}

int		my_main(char *str, int *delay)
{
  char		*str_temp;
  struct s_pos	pos;

  str_temp = init_str_temp(str, str_temp);
  if (!str_temp)
    return (1);
  if (is_even(str))
    {
      pos.left_char = &str[my_strlen(str) / 2 - 1];
      pos.right_char = &str[my_strlen(str) / 2];
    }
  else
    {
      pos.left_char = &str[my_strlen(str) / 2 - 1];
      pos.right_char = &str[my_strlen(str) / 2 + 1];
      anime_odd_line(str, str_temp, &str[(my_strlen(str) / 2)], delay);
    }
  while (*pos.right_char != '\0')
    {
      anime_even_line(str, str_temp, pos, delay);
      pos.left_char = pos.left_char - 1;
      pos.right_char = pos.right_char + 1;
    }
  return (0);
}

int		main(int argc, char **argv)
{
  char		*str;
  int		delay;

  if (argc < 2 || argc > 3)
    return my_putstr("Wrong usage\n");
  else if (argc == 2)
    delay = DEFAULT_DELAY;
  else
    delay = my_getnbr(argv[2]);
  if (delay < 0)
    return my_putstr("Delay must be > 0\n");
  str = argv[1];
  my_main(str, &delay);
  my_putchar('\n');
  return (0);
}
