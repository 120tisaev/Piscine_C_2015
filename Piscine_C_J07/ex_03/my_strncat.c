/*
** my_strcat.c for  in /home/henon_t/rendu/Piscine_C_J07
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 11:31:35 2015 Thomas Henon
** Last update Wed Oct  7 19:09:13 2015 Thomas Henon
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	dest_length;
  int	i;

  dest_length = my_strlen(dest);
  i = 0;
  while (src[i] != '\0' && i < nb)
    {
      dest[dest_length + i] = src[i];
      i = i + 1;
    }
  dest[dest_length + i] = '\0';
  return (dest);
}
