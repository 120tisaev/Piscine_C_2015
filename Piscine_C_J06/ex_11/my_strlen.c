/*
** my_putstr.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 09:49:52 2015 Thomas Henon
** Last update Sat Oct  3 08:33:09 2015 Thomas Henon
*/

int	my_strlen(char *str)
{
  char	*curChar;
  char	strlen;

  strlen = 0;
  curChar = str;
  while (*curChar != '\0')
  {
    strlen = strlen + 1;
    curChar = curChar + 1;
  }
  return (strlen);
}
