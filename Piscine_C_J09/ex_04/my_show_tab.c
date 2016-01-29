/*
** my_show_tab.c for  in /home/henon_t/rendu/Piscine_C_J09/ex_04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Fri Oct  9 11:02:21 2015 Thomas Henon
** Last update Fri Oct  9 21:36:20 2015 Thomas Henon
*/

#include <stdio.h>
#include "my.h"

int	my_show_tab(struct s_stock_par *par)
{
  while (par->str != 0)
    {
      my_putstr(par->str);
      my_putchar('\n');
      my_put_nbr(par->size_param);
      my_putchar('\n');
      my_show_wordtab(par->tab);
      par = par + sizeof(struct s_stock_par);
    }
  return (0);
}
