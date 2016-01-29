/*
** my_putnbr_base.c for  in /home/henon_t/rendu/Piscine_C_J07/lib/my
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 20:58:13 2015 Thomas Henon
** Last update Tue Oct  6 21:40:06 2015 Thomas Henon
*/

void	my_putnbr_base(int nbr, char *base)
{
  int	base_size;
  int	diviseur;
  int	result;

  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  diviseur = 1;
  base_size = my_strlen(base);
  while ((nbr / diviseur) >= base_size)
      diviseur = diviseur * base_size;
  while (diviseur > 0)
    {
      result = (nbr / diviseur) % base_size;
      my_putchar(base[result]);
      diviseur = diviseur / base_size;
    }
}
