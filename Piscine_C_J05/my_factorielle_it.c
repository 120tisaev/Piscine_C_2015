/*
** my_factorielle_it.c for  in /home/henon_t/rendu/Piscine_C_J05
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Fri Oct  2 10:02:10 2015 Thomas Henon
** Last update Fri Oct  2 22:12:06 2015 Thomas Henon
*/

int	my_factorielle_it(int nb)
{
  int	n;

  n = nb;
  if (n <= 0)
    return (0);
  while (n != 1)
    {
      if ((nb * (n - 1)) > 1073741823)
	return (0);
      nb = nb * (n - 1);
      n = n - 1;
    }
  return (nb);
}
