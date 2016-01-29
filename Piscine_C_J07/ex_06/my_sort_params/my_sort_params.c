/*
** main2.c for  in /home/henon_t/rendu/Piscine_C_J07/ex_06/my_sort_params
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Oct  7 19:58:13 2015 Thomas Henon
** Last update Thu Oct  8 08:46:19 2015 Thomas Henon
*/

void	cross_tab(int argc, char **argv)
{
  int	i;
  
  i = 0;
  while (i < argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

int	main(int argc, char **argv)
{
  int	i;
  int	i2;
  char	*temp;

  i = 0;
  while (i < argc)
    {
      i2 = i + 1;
      while (i2 < argc)
	{
	  if (my_strcmp(argv[i], argv[i2]) > 0)
	    {
	      temp = argv[i2];
	      argv[i2] = argv[i];
	      argv[i] = temp;
	    }
	  i2 = i2 + 1;
	}
      i = i + 1;
    }
  cross_tab(argc, argv);
  return (0);
}
