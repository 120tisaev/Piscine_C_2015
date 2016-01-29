/*
** my_strdup.c for  in /home/henon_t/rendu/Piscine_C_J08/ex_01
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  8 21:09:46 2015 Thomas Henon
** Last update Sun Oct 25 05:35:14 2015 Thomas Henon
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  int	length_src;
  char	*dest;
  int	i;

  length_src = my_strlen(src);
  dest = malloc(length_src + 1);
  if (!dest)
    return (0);
  i = 0;
  while (i < length_src)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
