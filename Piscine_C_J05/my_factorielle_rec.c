/*
** my_factorielle_rec.c for  in /home/henon_t/rendu/Piscine_C_J05
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct  3 20:10:55 2015 Thomas Henon
** Last update Sat Oct  3 20:59:29 2015 Thomas Henon
*/

int	my_factorielle_rec(int nb)
{
  if (nb != 1)
    {
      nb = nb * my_factorielle_rec(nb - 1);
    }
  else
    {
      return (nb);
    }
}
