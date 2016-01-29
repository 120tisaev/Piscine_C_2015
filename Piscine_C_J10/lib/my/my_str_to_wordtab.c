/*
** main.c for  in /home/henon_t/rendu/Piscine_C_J08/ex_04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  8 10:34:37 2015 Thomas Henon
** Last update Mon Oct 12 22:34:45 2015 Thomas Henon
*/

#include <stdlib.h>

int	find_word(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	  || (str[i] >= 97 && str[i] <= 122))
	{
	  while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
		 || (str[i] >= 97 && str[i] <= 122))
	    i++;
	  nb++;
	}
      i++;
    }
  return (nb);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	nb;
  int	i;
  int	j;
  int	k;

  i = 0;
  k = 0;
  nb = find_word(str);
  tab = malloc(sizeof(char *) * nb + 1);
  while (str[i] != '\0')
    {
      tab[k] = malloc(sizeof(char) * my_strlen(str));
      while ((str[i] <= '/' && str[i] >= 32)
	     || (str[i] <= '@' && str[i] >= ':' ) ||
	     (str[i] <= '`' && str[i] >= '[') || (str[i] <= 127 && str[i] >= '{'))
	i++;
      j = 0;
      while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	     || (str[i] >= 97 && str[i] <= 122))
	{
	  tab[k][j] = str[i];
	  i++;
	  j++;
	}
      k++;
    }
  tab[k] = NULL;
  return (tab);
}
