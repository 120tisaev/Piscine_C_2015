/*
** my_list_size.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_02
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct 12 11:21:45 2015 Thomas Henon
** Last update Tue Oct 13 12:46:24 2015 Thomas Henon
*/

#include "mylist.h"

int     my_list_size(t_list *begin)
{
  int   i;

  if (!begin)
      return (0);
  i = 0;
  while (begin->next != 0)
  {
    i = i + 1;
    begin = begin->next;
  }
  i = i + 1;
  return (i);
}
