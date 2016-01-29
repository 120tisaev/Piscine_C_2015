##
## Makefile for  in /home/henon_t/rendu/Piscine_C_J10/do-op
## 
## Made by Thomas Henon
## Login   <henon_t@epitech.net>
## 
## Started on  Sun Oct 11 16:30:09 2015 Thomas Henon
## Last update Tue Oct 13 15:35:46 2015 Thomas Henon
##

CC	= gcc

RM	= rm -f

CFLAGS  = -I ../include
LDFLAGS = -I ../include
LDFLAGS+= -l my -L ../lib

NAME	= my_add_list_to_list

SRCS	= 	main.c \
		my_add_list_to_list.c \
		add_to_list.c \
		my_show_list.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

copy:
	cp ../ressources/add_to_list.c ./
	cp ../ressources/my_show_list.c ./
	cp my_add_list_to_list.c ../ressources

$(NAME): copy $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re copy
