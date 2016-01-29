/*
** sum_params.c for  in /home/henon_t/rendu/Piscine_C_J08/ex_02
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Oct  7 15:52:39 2015 Thomas Henon
** Last update Thu Oct  8 21:21:45 2015 Thomas Henon
*/

#include <stdlib.h>

int	length_args(int argc, char **argv)
{
  int	i;
  int	size;

  size = 0;
  i = 0;
  while (i < argc)
    {
      size = size + my_strlen(argv[i]);
      i = i + 1;
    }
  return (size);
}

void	replace_nullbyte(char *str, int size)
{
  int	i;
  
  i = 0;
  while (i < size)
    {
      if (str[i] == '\0')
	str[i] = '\n';
      i = i + 1;
    }
  str[size - 1] = '\0';
}

char	*sum_params(int argc, char **argv)
{
  int	i;
  int	i2;
  int	i3;
  int	size_str;
  char	*str;

  size_str = length_args(argc, argv) + argc;
  str = malloc(size_str);
  if (!str)
    return (0);
  i = 0;
  i3 = 0;
  while (i < argc)
    {
      i2 = 0;
      while (i2 < (my_strlen(argv[i]) + 1))
	{
	  str[i3] = argv[i][i2];
	  i2 = i2 + 1;
	  i3 = i3 + 1;
	}
      i = i + 1;
    }
  replace_nullbyte(str, size_str);
  return (str);
}
