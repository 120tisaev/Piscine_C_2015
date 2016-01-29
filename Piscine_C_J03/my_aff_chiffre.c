/*
** my_aff_chiffre.c for my_aff_chiffre in /home/henon_t/rendu/Piscine_C_J03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Sep 30 17:33:57 2015 Thomas Henon
** Last update Fri Oct  2 09:21:56 2015 Thomas Henon
*/

void	my_aff_chiffre()
{
  int	curDigit;

  curDigit = 48;
  while (curDigit <= 57)
    {
      my_putchar(curDigit);
      curDigit = curDigit + 1;
    }
}
