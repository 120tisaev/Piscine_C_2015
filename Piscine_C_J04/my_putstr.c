/*
** my_putstr.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 09:49:52 2015 Thomas Henon
** Last update Thu Oct  1 09:55:08 2015 Thomas Henon
*/

int	my_putstr(char *str)
{
  char	*curChar;
  
  curChar = str;
  while (*curChar != '\0')
  {
    my_putchar(*curChar);
    curChar = curChar + sizeof(char);
  }
}
