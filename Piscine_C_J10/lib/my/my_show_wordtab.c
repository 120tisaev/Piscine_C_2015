/*
** my_show_wordtab.c for  in /home/henon_t/rendu/Piscine_C_J08/ex_03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Oct  7 16:56:30 2015 Thomas Henon
** Last update Sun Oct 11 18:53:03 2015 Thomas Henon
*/

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != 0)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
