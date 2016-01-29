/*
** my_add_list_to_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_09
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct 13 15:26:26 2015 Thomas Henon
** Last update Tue Oct 13 15:50:25 2015 Thomas Henon
*/

#include "mylist.h"

int		my_add_list_to_list(t_list **begin1, t_list **begin2)
{
  t_list	*first;

  first = *begin1;
  while ((*begin1)->next != 0)
      *begin1 = (*begin1)->next;
  (*begin1)->next = *begin2;
  *begin1 = first;
  return (0);
}
