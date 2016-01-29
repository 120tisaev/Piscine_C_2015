/*
** colle.c for  in /home/henon_t/rendu/Piscine_C_colles-Semaine_01
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct  3 13:34:49 2015 Thomas Henon
** Last update Sun Oct  4 09:49:17 2015 Thomas Henon
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	colle(int x, int y)
{
  char	nbrLines;
  char	nbrColumns;
  char	curLine;
  char	curColumn;

  nbrLines = y;
  nbrColumns = x;
  curLine = 1;
  while (curLine <= nbrLines)
    {
      curColumn = 1;
      while (curColumn <= nbrColumns)
	{
	  if (nbrLines == 1 || nbrColumns == 1)
	    {
	      my_putchar('B');
	    }
	  else
	    {
	      if ((curLine == 1 && curColumn == 1) || (curLine == nbrLines && curColumn == nbrColumns))
		my_putchar('A');
	      else if ((curLine == nbrLines && curColumn == 1) || (curLine == 1 && curColumn == nbrColumns))
		my_putchar('C');
	      else if (curLine == 1 || curLine == nbrLines || curColumn == 1 || curColumn == nbrColumns)
		my_putchar('B');
	      else
		{
		  if (nbrLines > 2)
		    my_putchar(' ');
		  else
		    my_putchar('B');
		}
	    }
	  curColumn = curColumn + 1;
	}
      my_putchar('\n');
      curLine = curLine + 1;
    }
  my_putchar('\n');
}

int	main()
{
  colle(3, 3);
  return (0);
}
