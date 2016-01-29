/*
** lines_list.c for  in /home/henon_t/Downloads/colle
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sun Oct 25 03:41:24 2015 Thomas Henon
** Last update Sun Oct 25 09:35:20 2015 Goteni Nelson
*/

#include <stdlib.h>
#include <stdio.h>
#include "colle.h"

int	count_lines(t_lines *lines)
{
  int	i;

  i = 0;
  while (lines != 0)
    {
      i = i + 1;
      lines = lines->next;
    }
  return (i);
}

t_lines	*get_line(int i, t_lines *lines)
{
  int	j;

  j = 0;
  while (j < i)
    {
      lines = lines->next;
      j = j + 1;
    }
  return (lines);
}

void	display_colle(char nb, t_lines *lines, char separator)
{
  my_putstr("[colle1-");
  my_putchar('0' + nb);
  my_putstr("] ");
  my_put_nbr(my_strlen(get_line(0, lines)->buffer));
  my_putchar(' ');
  my_put_nbr(count_lines(lines));
}

char	parse_colles(t_lines *lines)
{
  if (parse_colle1(lines))
    display_colle(1, lines, 0);
  else if (parse_colle2(lines))
    display_colle(2, lines, 0);
  else if (parse_colle3(lines))
    display_colle(3, lines, 0);
  else if (parse_colle4(lines))
    display_colle(4, lines, 0);
  else if (parse_colle5(lines))
    display_colle(5, lines, 0);
}

char		new_line(t_lines **lines, char *buff)
{
  t_lines	*elem;
  t_lines	*last;

  elem = malloc(sizeof(t_lines));
  if (!elem)
    return (0);
  elem->buffer = buff;
  if (*lines == 0)
    *lines = elem;
  else
    {
      last = *lines;
      while (last->next != 0)
	  last = last->next;
     last->next = elem;
    }
  elem->next = 0;
}
