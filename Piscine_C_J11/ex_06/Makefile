##
## Makefile for  in /home/henon_t/rendu/Piscine_C_J10/do-op
## 
## Made by Thomas Henon
## Login   <henon_t@epitech.net>
## 
## Started on  Sun Oct 11 16:30:09 2015 Thomas Henon
## Last update Tue Oct 13 14:20:15 2015 Thomas Henon
##

CC	= gcc

RM	= rm -f

CFLAGS  = -I ../include
LDFLAGS = -I ../include
LDFLAGS+= -l my -L ../lib

NAME	= my_find_elm_eq_in_list

SRCS	= 	main.c \
		my_find_elm_eq_in_list.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

copy:
	cp my_find_elm_eq_in_list.c ../ressources

$(NAME): copy $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re copy
