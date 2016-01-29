/*
** my_rm_all_eq_from_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_08
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct 13 12:59:49 2015 Thomas Henon
** Last update Tue Oct 13 15:23:56 2015 Thomas Henon
*/

#include "mylist.h"

int		my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  t_list	*prev;
  t_list	*cur;
  t_list	*first;

  prev = 0;
  cur = *begin;
  first = cur;
  while (cur != 0)
    {
      if (!cmp(cur->data, data_ref))
	{
	  if (cur == first)
	    first = cur->next;
	  else if (cur->next == 0)
	    prev->next = 0;
	  else
	    prev->next = cur->next;
	}
      prev = cur;
      cur = cur->next;
    }
  *begin = first;
  return (0);
}
