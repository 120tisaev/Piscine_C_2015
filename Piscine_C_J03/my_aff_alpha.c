/*
** my_aff_alpha.c for my_aff_alpha in /home/henon_t/rendu/Piscine_C_J03
**
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
**
** Started on  Wed Sep 30 10:17:36 2015 Thomas Henon
** Last update Fri Oct  2 09:08:15 2015 Thomas Henon
*/

int	my_aff_alpha()
{
  char	curChar;

  curChar = 97;
  while (curChar <= 122)
    {
      my_putchar(curChar);
      curChar = curChar + 1;
    }
}
