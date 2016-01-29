/*
** add_to_list.c for  in /home/henon_t/rendu/Piscine_C_J11/ex_01
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct 13 13:33:23 2015 Thomas Henon
** Last update Tue Oct 13 13:34:45 2015 Thomas Henon
*/

#include <stdlib.h>
#include "mylist.h"

t_list		*add_to_list(t_list *list, void *data)
{
  t_list	*elem;

  elem = malloc(sizeof(t_list));
  if (!elem)
    return (0);
  elem->data = data;
  elem->next = list;
  return (elem);
}
