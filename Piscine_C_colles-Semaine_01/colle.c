/*
** colle.c for  in /home/henon_t/rendu/Piscine_C_colles-Semaine_01
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct  3 13:34:49 2015 Thomas Henon
** Last update Sat Oct  3 23:44:47 2015 Thomas Henon
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	tests(char curLine, char curColumn, char nbrLines, char nbrColumns)
{
  if ((curLine == 1 && curColumn == 1) || (curLine == 1 && curColumn == nbrColumns))
    my_putchar('o');
  else if ((curLine == nbrLines && curColumn == 1) || (curLine == nbrLines && curColumn == nbrColumns))
    my_putchar('o');
  else if (curColumn == 1 || curColumn == nbrColumns)
    my_putchar('|');
  else if (curLine == 1 || curLine == nbrLines)
    my_putchar('-');
  else
    my_putchar(' ');
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
	  tests(curLine, curColumn, nbrLines, nbrColumns);
	  curColumn = curColumn + 1;
	}
      my_putchar('\n');
      curLine = curLine + 1;
    }
}

void	main()
{
  colle(5, 5);
}
