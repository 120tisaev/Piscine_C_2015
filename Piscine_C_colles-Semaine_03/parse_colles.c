/*
** parse_colles.c for  in /home/henon_t/Downloads/colle
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Sun Oct 25 01:52:33 2015 Thomas Henon
** Last update Sun Oct 25 04:02:17 2015 Thomas Henon
*/

#include <stdio.h>
#include "colle.h"

char	parse_colle1(t_lines *lines)
{
  t_pos pos;

  pos.top = '-';
  pos.top_left = 'o';
  pos.top_right = 'o';
  pos.left = '|';
  pos.right = '|';
  pos.bottom_left = 'o';
  pos.bottom_right = 'o';
  pos.bottom = '-';
  return (parse_pos(&pos, lines));
}

char	parse_colle2(t_lines *lines)
{
  t_pos pos;

  pos.top = '*';
  pos.top_left = '/';
  pos.top_right = '\\';
  pos.left = '*';
  pos.right = '*';
  pos.bottom_left = '\\';
  pos.bottom_right = '/';
  pos.bottom = '*';
  return (parse_pos(&pos, lines));
}

char	parse_colle3(t_lines *lines)
{
  t_pos pos;

  pos.top = 'B';
  pos.top_left = 'A';
  pos.top_right = 'A';
  pos.left = 'B';
  pos.right = 'B';
  pos.bottom_left = 'C';
  pos.bottom_right = 'C';
  pos.bottom = 'B';
  return (parse_pos(&pos, lines));
}

char	parse_colle4(t_lines *lines)
{
  t_pos pos;

  pos.top = 'B';
  pos.top_left = 'A';
  pos.top_right = 'C';
  pos.left = 'B';
  pos.right = 'B';
  pos.bottom_left = 'A';
  pos.bottom_right = 'C';
  pos.bottom = 'B';
  return (parse_pos(&pos, lines));
}

char	parse_colle5(t_lines *lines)
{
  t_pos pos;

  pos.top = 'B';
  pos.top_left = 'A';
  pos.top_right = 'C';
  pos.left = 'B';
  pos.right = 'B';
  pos.bottom_left = 'C';
  pos.bottom_right = 'A';
  pos.bottom = 'B';
  return (parse_pos(&pos, lines));
}
