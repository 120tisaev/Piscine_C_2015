/*
** main.c for  in /home/henon_t/Downloads/colle
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sun Oct 25 06:04:44 2015 Thomas Henon
** Last update Sun Oct 25 09:40:49 2015 Goteni Nelson
*/

#include "colle.h"

int		main(int argc, char **argv)
{
  char		buff[BUFF_SIZE + 1];
  int		len;
  t_lines	*lines;

  lines = 0;
  while ((len = read(0, buff, BUFF_SIZE)) > 0)
    {
      if (len != 0)
	{
	  buff[len] = 0;
	  parse_buffer(buff, &lines);
	}
    }
  parse_colles(lines);
  my_putchar('\n');
  return (0);
}
