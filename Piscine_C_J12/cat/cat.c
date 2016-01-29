/*
** cat.c for  in /home/henon_t/rendu/Piscine_C_J12
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Oct 14 09:30:29 2015 Thomas Henon
** Last update Wed Oct 14 17:51:43 2015 Thomas Henon
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"
#include "cat.h"

void	display_buffer(char *str)
{
  int	i;

  i = 0;
  while (i < BUFFER_SIZE)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	read_file(char *file)
{
  int	fd;
  char	buffer[BUFFER_SIZE];

  flush_buffer(buffer);
  fd = open(file, O_RDONLY);
  if (fd <= 0)
      return (0);
  while (read(fd, buffer, BUFFER_SIZE) > 0)
    {
      display_buffer(buffer);
      flush_buffer(buffer);
    }
  close(fd);
  return (1);
}

void	flush_buffer(char *buffer)
{
  int	i;

  i = 0;
  while (i < BUFFER_SIZE)
    {
      buffer[i] = '\0';
      i = i + 1;
    }
}

int	main(int argc, char **argv)
{
  int	i;
  char	buffer[BUFFER_SIZE];

  if (argc == 1)
    {
      flush_buffer(buffer);
      while (read(STD_INPUT, buffer, BUFFER_SIZE) > 0)
	{
	  display_buffer(buffer);
	  flush_buffer(buffer);
	}
    }
  else
    {
      i = 1;
      while (i < argc)
	{
	  read_file(argv[i]);
	  i = i + 1;
	}
    }
  return (0);
}
