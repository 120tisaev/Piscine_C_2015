/*
** my_aff_params.c for  in /home/henon_t/rendu/Piscine_C_J07/ex_04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 14:02:39 2015 Thomas Henon
** Last update Wed Oct  7 18:36:22 2015 Thomas Henon
*/

int	main(int argc, char **argv)
{
  char	i;
  
  i = argc - 1;
  while (i >= 0)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i - 1;
    }
  return (0);
}
