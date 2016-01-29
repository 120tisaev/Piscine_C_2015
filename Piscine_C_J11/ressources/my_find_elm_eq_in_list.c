/*
** my_find_elm_eq_in_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct 13 12:40:22 2015 Thomas Henon
** Last update Tue Oct 13 12:54:11 2015 Thomas Henon
*/

#include "mylist.h"

void	*my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  while (begin != 0)
    {
      if (!cmp(begin->data, data_ref))
	{
	  return (begin->data);
	}
      begin = begin->next;
    }
  return (0);
}
