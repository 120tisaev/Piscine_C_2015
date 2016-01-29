/*
** colle3.h for  in /home/henon_t/Downloads/colle
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sat Oct 24 23:50:05 2015 Thomas Henon
** Last update Sun Oct 25 09:16:06 2015 Goteni Nelson
*/

#ifndef COLLE_3_H_
# define COLLE_3_H_
# define BUFF_SIZE 4096

typedef struct		s_lines
{
  char			*buffer;
  struct s_lines	*next;
}			t_lines;

typedef	struct	s_pos
{
  char		top_left;
  char		top_right;
  char		bottom_left;
  char		bottom_right;
  char		left;
  char		right;
  char		top;
  char		bottom;
}		t_pos;

int		index_char(char c, char *buff);
char		*join_buff(char *buff1, char *buff2);
char		new_line(t_lines **lines, char *buff);
char		parse_buffer(char *buff, t_lines **lines);

char		parse_colles(t_lines *lines);
int		count_lines(t_lines *lines);
t_lines		*get_line(int i, t_lines *lines);
void		display_colle(char nb, t_lines *lines, char separator);

char		parse_colle1(t_lines *lines);
char		parse_colle2(t_lines *lines);
char		parse_colle3(t_lines *lines);
char		parse_colle4(t_lines *lines);
char		parse_colle5(t_lines *lines);

char		*get_pos(int line, int column, t_lines *lines);
char		parse_pos(t_pos *pos, t_lines *lines);
char		test_top(char *line, t_pos *pos);
char		test_middle(char *line, t_pos *pos);
char		test_bottom(char *line, t_pos *pos);

#endif
