void	print_digits(char digit1, char digit2, char digit3)
{
  my_putchar((48 + digit1));
  my_putchar((48 + digit2));
  my_putchar((48 + digit3));

  if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

void	my_aff_comb()
{
  char	digit1;
  char	digit2;
  char	digit3;

  digit1 = 0;
  while (digit1 <= 7)
    {
      digit2 = digit1 + 1;
      while (digit2 <= 8)
	{
	  digit3 = digit2 + 1;
	  while (digit3 <= 9)
	    {
	      print_digits(digit1, digit2, digit3);
	      digit3 = digit3 + 1;
	    }
	  digit2 = digit2 + 1;
	}
      digit1 = digit1 + 1;
    }
}
