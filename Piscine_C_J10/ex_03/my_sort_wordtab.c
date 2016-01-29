/*
** my_sort_wordtab.c for  in /home/henon_t/rendu/Piscine_C_J10/ex_03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sun Oct 11 18:11:31 2015 Thomas Henon
** Last update Sun Oct 11 18:55:46 2015 Thomas Henon
*/

#include "my_sort_wordtab.h"

int	my_tab_size(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != 0)
    {
      i = i + 1;
    }
  return (i);
}

int	my_sort_wordtab(char **tab)
{
  int	i;
  int	i2;
  char	*temp;

  i = 0;
  while (i < my_tab_size(tab))
    {
      i2 = i + 1;
      while (i2 < my_tab_size(tab))
	{
	  if (my_strcmp(tab[i], tab[i2]) > 0)
	    {
	      temp = tab[i2];
	      tab[i2] = tab[i];
	      tab[i] = temp;
	    }
	  i2 = i2 + 1;
	}
      i = i + 1;
    }
  return (0);
}
