/*
** my_find_node_eq_in_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_07
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct 13 12:42:55 2015 Thomas Henon
** Last update Tue Oct 13 20:24:16 2015 Thomas Henon
*/

#include "mylist.h"

t_list	*my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  while (begin != 0)
    {
      if (!cmp(begin->data, data_ref))
	{
	  return (begin);
	}
      begin = begin->next;
    }
  return (0);
}
