/*
** my_param_to_tab.c for  in /home/henon_t/rendu/Piscine_C_J09/ex_03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  8 16:11:32 2015 Thomas Henon
** Last update Fri Oct  9 21:35:52 2015 Thomas Henon
*/

#include <stdlib.h>
#include "my.h"

struct s_stock_par	*my_param_to_tab(int ac, char **av)
{
  struct s_stock_par	*stocks;
  int	i;

  stocks = malloc(sizeof(struct s_stock_par) * (ac + 1));
  if (!stocks)
    return (0);
  i = 0;
  while (i <= ac)
    {
      if (i == ac)
	  stocks[i].str = 0;
      else
	{
	  stocks[i].size_param = my_strlen(av[i]);
	  stocks[i].str = av[i];
	  stocks[i].copy = my_strdup(av[i]);
	  stocks[i].tab = my_str_to_wordtab(av[i]);
	}
      i = i + 1;
    }
  return (stocks);
}
