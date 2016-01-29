/*
** my_params_in_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_01
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct 12 08:54:20 2015 Thomas Henon
** Last update Tue Oct 13 13:33:42 2015 Thomas Henon
*/

#include <stdlib.h>
#include "mylist.h"
#include "my_params_in_list.h"

t_list		*my_params_in_list(int ac, char **av)
{
  int		i;
  t_list	*list;

  list = 0;
  i = 0;
  while (i <= (ac - 1))
    {
      list = add_to_list(list, av[i]);
      i = i + 1;
    }
  return (list);
}
