/*
** util.c for  in /home/henon_t/colle2
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct 10 22:23:30 2015 Thomas Henon
** Last update Sat Oct 10 22:24:57 2015 Thomas Henon
*/

int	is_even(char *str)
{
  return ((my_strlen(str) % 2) == 0);
}

int	get_index(char *str, char *c)
{
  int	i;

  i = 0;
  while (c != str)
    {
      i = i + 1;
      str = str + 1;
    }
  return (i);
}
