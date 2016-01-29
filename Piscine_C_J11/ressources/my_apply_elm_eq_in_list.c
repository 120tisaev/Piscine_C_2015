/*
** my_apply_elm_eq_in_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_05
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct 13 12:30:40 2015 Thomas Henon
** Last update Tue Oct 13 12:39:23 2015 Thomas Henon
*/

#include "mylist.h"

int	my_apply_on_eq_in_list(t_list *begin,
			       int (*f)(),
			       void *data_ref,
			       int (*cmp)())
{
  while (begin != 0)
    {
      if (!cmp(begin->data, data_ref))
	{
	  f(begin->data);
	}
      begin = begin->next;
    }
}
