/*
** cpt_size_last_line.c for  in /home/henon_t/rendu/projets/tests
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct  3 14:52:22 2015 Thomas Henon
** Last update Fri Nov 27 11:43:56 2015 Thomas Henon
*/

void	print_x_chars(char c, char count, char new_line)
{
  char	i;

  i = 0;
  while (i < count)
    {
      my_putchar(c);
      i = i + 1;
    }
  if (new_line)
    my_putchar('\n');
}

void	display_trunk(int tree_size, int nbr_columns_last_line)
{
  int	cur_height;
  int	width;
  int	height;

  height = tree_size;
  if ((tree_size % 2) == 0)
    tree_size = tree_size + 1;
  cur_height = 1;
  while (cur_height <= height)
    {
      print_x_chars(' ', ((nbr_columns_last_line - tree_size) / 2), 0);
      print_x_chars('|', tree_size, 1);
      cur_height = cur_height + 1;
    }
}

void	display(int nb_stages, int cols_last_line, int nb_stars)
{
  print_x_chars(' ', ((cols_last_line - nb_stars) / 2), 0);
  print_x_chars('*', nb_stars, 1);
  if (cols_last_line == nb_stars)
    display_trunk(nb_stages, nb_stars);
}

int	treatement(int nb_stages, int cols_last_line)
{
  int	c_stage;
  int	c_line;
  int	nb_lines;
  int	nb_stars;

  nb_stars = 1;
  nb_lines = 4;
  c_stage = 0;
  while (c_stage < nb_stages)
    {
      c_line = 0;
      while (c_line < nb_lines)
	{
	  if (cols_last_line)
	    display(nb_stages, cols_last_line, nb_stars);
          else if ((c_stage + 1) == nb_stages && (c_line + 1) == nb_lines)
	      treatement(nb_stages, nb_stars);
	  nb_stars = nb_stars + 2;
	  c_line = c_line + 1;
	}
      nb_lines = nb_lines + 1;
      nb_stars = nb_stars - 2 - (((c_stage / 2) + 1) * 2);
      c_stage = c_stage + 1;
    }
}

void	sapin(int taille)
{
  if (taille > 0)
    treatement(taille, 0);
}
