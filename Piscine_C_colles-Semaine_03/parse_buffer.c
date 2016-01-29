/*
** colle3.c for  in /home/henon_t/Downloads/colle
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct 24 23:51:05 2015 Thomas Henon
** Last update Sun Oct 25 05:32:46 2015 Thomas Henon
*/

#include <stdio.h>
#include <stdlib.h>
#include "colle.h"

int	index_char(char c, char *buff)
{
  int	i;

  i = 0;
  while (buff[i] != '\0')
    {
      if (buff[i] == c)
	return (i);
      i = i + 1;
    }
  return (-1);
}

char	*join_buff(char *buff1, char *buff2)
{
  char	*dest;
  int	i;

  dest = malloc(my_strlen(buff1) + my_strlen(buff2) + 1);
  if (dest == NULL)
    return (0);
  i = 0;
  while (*buff1 != 0)
    {
      dest[i] = *buff1;
      buff1 = buff1 + 1;
      i = i + 1;
    }
  while (*buff2 != 0)
    {
      dest[i] = *buff2;
      buff2 = buff2 + 1;
      i = i + 1;
    }
  dest[i] = 0;
  return (dest);
}

char		parse_buffer(char *buff, t_lines **lines)
{
  static char	*buffer_rest = 0;
  int		nbr_lines;
  int		backslashe_n_index;

  nbr_lines = 0;
  buff = my_strdup(buff);
  if (buffer_rest != 0)
    buff = join_buff(buffer_rest, buff);
  while ((backslashe_n_index = index_char('\n', buff)) >= 0)
    {
      buff[backslashe_n_index] = '\0';
      new_line(lines, buff);
      nbr_lines = nbr_lines + 1;
      buff = &(buff[backslashe_n_index + 1]);
    }
  buffer_rest = buff;
}
