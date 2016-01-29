/*
** my_power_it.c for  in /home/henon_t/rendu/Piscine_C_J05
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct  3 21:00:40 2015 Thomas Henon
** Last update Sat Oct  3 21:26:31 2015 Thomas Henon
*/

int	my_power_it(int nb, int power)
{
  char	a;
  
  a = power;
  while (a > 1)
    {
      nb = nb * nb;
      a = a - 1;
    }
  return (nb);
}
