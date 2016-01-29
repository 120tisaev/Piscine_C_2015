/*
** my_sort_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_10
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct 13 15:54:33 2015 Thomas Henon
** Last update Tue Oct 13 20:18:53 2015 Thomas Henon
*/

#include "mylist.h"

int		my_sort_list(t_list **begin, int (*cmp)())
{
  t_list	*cur;
  t_list	*cur2;
  t_list	*temp;

  cur = *begin;
  while (cur != 0)
    {
      cur2 = cur->next;
      while (cur2 != 0)
	{
	  if (cmp(cur->data, cur2->data) > 0)
	    {
	      temp = cur;
	      cur = cur2;
	      cur2 = temp;
	    }
	  cur2 = cur2->next;
	}
      cur = cur->next;
    }
  return (0);
}
