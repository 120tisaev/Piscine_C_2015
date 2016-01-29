/*

** my_putnbr.c for  in /home/henon_t/rendu/Piscine_C_J06/ex_16
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 15:16:34 2015 Thomas Henon
** Last update Sun Oct 25 06:35:59 2015 Thomas Henon
*/

int	my_put_nbr(int nb)
{
  int	neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          neg = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
