/*
** cat.c<2> for  in /home/henon_t/rendu/Piscine_C_J12/cat
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Oct 14 10:25:06 2015 Thomas Henon
** Last update Wed Oct 14 17:53:09 2015 Thomas Henon
*/


#ifndef CAT_H_

# define CAT_H_
# define BUFFER_SIZE 1000

void	cat();
int	read_file(char *file);
void	flush_buffer(char *buffer);
void	cat_files(int argc, char **argv);

#endif /* CAT_H_ */


