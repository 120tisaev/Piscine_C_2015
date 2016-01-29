/*
** grep.h for  in /home/henon_t/rendu/Piscine_C_J12/grep
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Oct 14 13:43:16 2015 Thomas Henon
** Last update Wed Oct 14 17:53:30 2015 Thomas Henon
*/

#ifndef GREP_H_

# define GREP_H_
# define BUFFER_SIZE 2048

typedef struct		s_buffer
{
  char			*buffer;
  struct s_buffer	*next;
}			t_buffer;

#endif /* GREP_H_ */
