/*
** my_putstr.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 09:49:52 2015 Thomas Henon
** Last update Sun Oct 11 00:58:52 2015 Thomas Henon
*/

int	my_putstr(char *str)
{
  char	*curChar;

  curChar = str;
  while (*curChar != '\0')
  {
    my_putchar(*curChar);
    curChar = curChar + 1;          ;
  }
  return (0);
}
