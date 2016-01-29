/*
** main.c for  in /home/henon_t/rendu/Piscine_C_J08/ex_04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  8 10:34:37 2015 Thomas Henon
** Last update Thu Oct  8 21:50:57 2015 Thomas Henon
*/

#include <stdlib.h>

int     is_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  if (c >= 'A' && c <= 'Z')
    return (1);
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

char	*get_next_alpha(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      if (is_alpha(str[i]))
	return &(str[i]);
      i = i + 1;
    }
  return (0);
}

int	nbr_words(char *str)
{
  int   i;
  char  *start;
  char  *end;
  int	nbr_words;

  nbr_words = 0;
  i = 0;
  start = get_next_alpha(str);
  while (i <= my_strlen(str))
    {
      if (!is_alpha(str[i]) && is_alpha(str[i-1]))
	  nbr_words = nbr_words + 1;
      i = i + 1;
    }
  return (nbr_words);
}

void	set_word(char **values, int index, char *start, char *end)
{
  int	size;
  int	i;

  size = (end - start) + 1;
  values[index] = malloc(size);
  if (!values[index])
    return;
  i = 0;
  while (i < size)
    {
      values[index][i] = *(start + i);
      i = i + 1;
    }
}

char	**my_str_to_wordtab(char *str)
{
  int   i;
  char  *start;
  char  *end;
  int   size;
  char	**values;
  int	cur_word;

  cur_word = 0;
  values = malloc(nbr_words(str) + 1);
  if (!values)
    return (0);
  i = 0;
  start = get_next_alpha(str);
  while (i <= my_strlen(str))
    {
      if (!is_alpha(str[i]) && is_alpha(str[i-1]))
        {
	  set_word(values, cur_word, start, &(str[i-1]));
	  start = get_next_alpha(&str[i]);
	  cur_word = cur_word + 1;
	}
      i = i + 1;
    }
  values[cur_word] = 0;
  return (values);
}
