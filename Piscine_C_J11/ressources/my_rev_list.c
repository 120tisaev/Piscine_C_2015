/*
** my_rev_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct 12 22:54:45 2015 Thomas Henon
** Last update Tue Oct 13 13:38:43 2015 Thomas Henon
*/

#include <stdlib.h>
#include "mylist.h"
#include "my_rev_list.h"

int		my_rev_list(t_list **begin)
{
  t_list	*cur;
  t_list	*prev;
  t_list	*next;
  t_list	*last;

  prev = 0;
  cur = *begin;
  next = cur->next;
  while (next != 0)
    {
      next = cur->next;
      cur->next = prev;
      last = cur;
      prev = cur;
      cur = next;
    }
  *begin = last;
  return (0);
}
