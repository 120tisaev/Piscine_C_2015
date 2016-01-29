/*
** my_aff_comb2.c for  in /home/henon_t/rendu/Piscine_C_J03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Sep 30 18:21:17 2015 Thomas Henon
** Last update Fri Oct  2 09:23:04 2015 Thomas Henon
*/

void	my_putnbr(char nbr)
{
  if (nbr <= 9)
    {
      my_putchar('0');
      my_putchar((48 + nbr));
    }
  else
    {
      my_putchar((48 + (nbr / 10)));
      my_putchar((48 + (nbr % 10)));
    }
}

void	my_aff_comb2()
{
  char	a;
  char	b;

  a = 0;
  while (a <= 98)
    {
      b = a + 1;
      while (b <= 99)
	{
	  my_putnbr(a);
	  my_putchar(' ');
	  my_putnbr(b);
	  if (!(a == 98 && b == 99))
	    {
	      my_putchar(',');
	      my_putchar(' ');
	    }
	  b = b + 1;
	} 
      a = a + 1;
    }
}
