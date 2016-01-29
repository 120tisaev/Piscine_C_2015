/*

** my_putnbr.c for  in /home/henon_t/rendu/Piscine_C_J06/ex_16
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 15:16:34 2015 Thomas Henon
** Last update Tue Oct  6 11:23:40 2015 Thomas Henon
*/

int	my_put_nbr(int nb)
{
  char	rang;
  int	result;
  int	power;

  if (nb < -2147483648 || nb > 2147483647)
    return (0);
  result = 0;
  rang = 9;
  while (rang >= 0)
    {
      power = my_power_it(10, rang);
      result = result + (((nb / power) % 10) * power);
      rang = rang - 1;
    }
  return (result);
}
