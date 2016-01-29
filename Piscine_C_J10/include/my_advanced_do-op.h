/*
** my_opp.h for  in /home/henon_t/rendu/Piscine_C_J10/include
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on Mon Oct 12 15:20:11 2015 Thomas Henon
** Last update Mon Oct 12 22:18:22 2015 Thomas Henon
*/

#ifndef MY_ADVANCED_DO_OP_H_

# define MY_ADVANCED_DO_OP_H_

typedef struct	s_opp
{
  char  *op;
  int   (*func)(int *, int b);
} t_opp;

int	my_add(int *a, int *b);
int	my_sub(int *a, int *b);
int	my_mul(int *a, int *b);
int	my_div(int *a, int *b);
int	my_mod(int *a, int *b);
void	my_usage();

#endif
