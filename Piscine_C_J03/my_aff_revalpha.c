/*
** my_aff_revalpha.c for  in /home/henon_t/rendu/Piscine_C_J03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Sep 30 18:24:41 2015 Thomas Henon
** Last update Fri Oct  2 09:23:46 2015 Thomas Henon
*/

void	my_aff_revalpha()
{
  char	curChar;
  
  curChar = 122;
  while (curChar >= 97)
    {
      my_putchar(curChar);
      curChar = curChar - 1;
    }
}
