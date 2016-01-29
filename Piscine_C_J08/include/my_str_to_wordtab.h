/*
** my_str_to_wordtab.h for  in /home/henon_t/rendu/Piscine_C_J08/ex_04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  8 14:18:14 2015 Thomas Henon
** Last update Thu Oct  8 22:26:52 2015 Thomas Henon
*/

#ifndef _MY_STR_TO_WORDTAB_
# define _MY_STR_TO_WORDTAB_

int     is_alpha(char c);
char    *get_next_alpha(char *str);
int     nbr_words(char *str);
void    set_word(char **values, int index, char *start, char *end);
char    **my_str_to_wordtab(char *str);

#endif
