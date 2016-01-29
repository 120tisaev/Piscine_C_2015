/*
** my_putstr.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 09:49:52 2015 Thomas Henon
** Last update Thu Oct  1 19:25:41 2015 Thomas Henon
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
    curChar = curChar + sizeof(char);
  }
  return (strlen);
}
