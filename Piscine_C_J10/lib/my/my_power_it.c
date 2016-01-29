/*
** my_power_it.c for  in /home/henon_t/rendu/Piscine_C_J05
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct  3 21:00:40 2015 Thomas Henon
** Last update Tue Oct  6 11:00:01 2015 Thomas Henon
*/

int	my_power_it(int nb, int power)
{
  int	a;

  if (power == 0)
    return (1);
  a = nb;
  while (power > 1)
    {
      nb = nb * a;
      power = power - 1;
    }
  return (nb);
}
