/*
** tests_pos.c for  in /home/henon_t/Downloads/colle
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sun Oct 25 02:23:23 2015 Thomas Henon
** Last update Sun Oct 25 09:30:21 2015 Goteni Nelson
*/

#include <stdio.h>
#include "colle.h"

char	*get_pos(int line, int column, t_lines *lines)
{
  if (line <= count_lines(lines))
    {
      if (column <= my_strlen(get_line(line, lines)->buffer))
	return (&(get_line(line, lines)->buffer[column]));
    }
  return (0);
}

char	test(int cur_col, int cur_line, t_lines *lines, t_pos *pos)
{
  char	*cur_char;
  int	length;

  cur_char = get_pos(cur_line, cur_col, lines);
  length = my_strlen(get_line(cur_line, lines)->buffer);
  if (cur_line == 0 && cur_col == 0 && *cur_char != pos->top_left)
    return (-1);
  if (cur_line == 0 && cur_col == (length-1) && *cur_char != pos->top_right)
    return (-2);
  if (cur_line == count_lines(lines)-1 && cur_col == 0
      && *cur_char != pos->bottom_left)
    return (-3);
  if (cur_line == count_lines(lines)-1 && cur_col == (length-1)
      && *cur_char != pos->bottom_right)
    return (-3);
  if (cur_line > 0 && cur_line < count_lines(lines)-1 && cur_col == 0
      && *cur_char != pos->left)
    return (-4);
  if (cur_line > 0 && cur_line < count_lines(lines)-1
      && cur_col == (length-1) && *cur_char != pos->right)
    return (-5);
  return (1);
}

char	parse_pos(t_pos *pos, t_lines *lines)
{
  int	cur_line;
  int	return_v;
  int	cur_col;
  int	length;

  cur_line = 0;
  while (cur_line < count_lines(lines))
    {
      cur_col = 0;
      length = my_strlen(get_line(cur_line, lines)->buffer);
      while (cur_col < length)
	{
	  if (count_lines(lines) > 2)
	    {
	      if (test(cur_col, cur_line, lines, pos) <= 0)
		return (0);
	    }
	  cur_col = cur_col + 1;
	}
      cur_line = cur_line + 1;
    }
  return (1);
}
