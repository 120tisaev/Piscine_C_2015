/*
** op.c for  in /home/henon_t/rendu/Piscine_C_J10/do-op
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sun Oct 11 16:28:03 2015 Thomas Henon
** Last update Mon Oct 12 21:14:28 2015 Thomas Henon
*/

int	add_op(int *a, int *b)
{
  return (*a + *b);
}

int	div_op(int *a, int *b)
{
  return (*a / *b);
}

int	mult_op(int *a, int *b)
{
  return (*a * *b);
}

int	sub_op(int *a, int *b)
{
  return (*a - *b);
}

int	mod_op(int *a, int *b)
{
  return (*a % *b);
}
