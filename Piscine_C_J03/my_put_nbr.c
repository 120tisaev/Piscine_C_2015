#include <stdio.h>
#include <stdlib.h>

int	nbr_rang(int nb)
{
  int	rang;
  int	i;

  i = 0;
  rang = 10;
  while ((nb / rang) > 0)
    {
      rang = rang * 10;	
      i = i + 1;
    }
  return (rang);
}

char	my_put_nbr(int b)
{
  int	monNbr;
  int	rang;
  int	result;

  b = 1234;
  rang = nbr_rang(b);
  monNbr = 12345;
  while (((monNbr / rang) % 10) > 0)
    {
      result = ((monNbr / rang) % 10);
      rang = rang / 10;
    }
}

