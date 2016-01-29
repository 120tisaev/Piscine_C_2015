##
## Makefile for  in /home/henon_t/Downloads/colle
## 
## Made by Thomas Henon
## Login   <henon_t@epitech.net>
## 
## Started on  Sat Oct 24 15:42:24 2015 Thomas Henon
## Last update Sun Oct 25 06:27:48 2015 Thomas Henon
##

NAME	= colle3

RM	= rm -f

CC	= gcc

SRCS	=	lines_list.c \
		main.c \
		parse_buffer.c \
		parse_colles.c \
		tests_pos.c \
		my_strdup.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -l my -L lib -I include

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
