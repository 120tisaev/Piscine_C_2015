/*
** my_aff_params.c for  in /home/henon_t/rendu/Piscine_C_J07/ex_04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 14:02:39 2015 Thomas Henon
** Last update Tue Oct  6 14:07:07 2015 Thomas Henon
*/

int	main(int argc, char **argv)
{
  char	i;

  i = 0;
  while (i < argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
