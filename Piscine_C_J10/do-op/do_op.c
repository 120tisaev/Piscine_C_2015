/*
** main.c for  in /home/henon_t/rendu/Piscine_C_J10/do-op
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sun Oct 11 15:39:54 2015 Thomas Henon
** Last update Mon Oct 12 22:29:37 2015 Thomas Henon
*/

#include "ops.h"
#include "my.h"

char    get_op(char *str)
{
  char	*ops;
  int   i;

  ops = "-+/:*%";
  while (*str != '\0')
    {
      i = 0;
      while (ops[i] != '\0')
	{
	  if (*str == ops[i])
	    return (ops[i]);
	  i = i + 1;
	}
      str = str + 1;
    }
  return (0);
}

char    perform_calc(int *a, int *b, char *op)
{
  int	(*func_ptr)(int *, int *);
  int   result;

  if (*op == '-')
    func_ptr = sub_op;
  if (*op == '+')
    func_ptr = add_op;
  if (*op == ':' || *op == '/')
    func_ptr = div_op;
  if (*op == '*')
    func_ptr = mult_op;
  if (*op == '%')
    func_ptr = mod_op;
  if ((*op == ':' || *op == '/' || *op == '%') && *b == 0)
    {
      my_putstr("Stop: division by zero\n");
      return (0);
    }
  result = func_ptr(a, b);
  my_put_nbr(result);
  return (1);
}


int     main(int argc, char **argv)
{
  char  op;
  int   a;
  int   b;

  if (argc != 4)
    return (1);
  op = get_op(argv[2]);
  if (!op)
    return my_putstr("0\n");
  if (!my_str_isnum(argv[1]) || !my_str_isnum(argv[3]))
    {
      if (my_str_isnum(argv[1]))
	my_putstr(argv[1]);
      else if (my_str_isnum(argv[3]))
	my_putstr(argv[3]);
      my_putchar('\n');
      return (1);
    }
  a = my_getnbr(argv[1]);
  b = my_getnbr(argv[3]);
  if (perform_calc(&a, &b, &op))
    my_putchar('\n');
  return (0);
}
