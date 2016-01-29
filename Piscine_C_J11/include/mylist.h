/*
** mylist.h for  in /home/henon_t/rendu/Piscine_C_J11/include
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct 12 08:51:12 2015 Thomas Henon
** Last update Mon Oct 12 08:52:39 2015 Thomas Henon
*/

#ifndef MYLIST_H_

# define MYLIST_H_

typedef struct	s_list
{
  void		*data;
  struct s_list	*next;
} t_list;

#endif
