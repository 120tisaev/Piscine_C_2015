/*
** my_apply_on_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct 12 23:29:53 2015 Thomas Henon
** Last update Tue Oct 13 20:23:25 2015 Thomas Henon
*/

#include "mylist.h"

int   my_apply_on_list(t_list *begin, int (*f)(void*))
{
  while (begin != 0)
    {
      f(begin->data);
      begin = begin->next;
    }
  return (0);
}
