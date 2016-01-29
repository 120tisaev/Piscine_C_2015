##
## Makefile for  in /home/henon_t/rendu/Piscine_C_J10/do-op
## 
## Made by Thomas Henon
## Login   <henon_t@epitech.net>
## 
## Started on  Sun Oct 11 16:30:09 2015 Thomas Henon
## Last update Sun Oct 11 16:58:59 2015 Thomas Henon
##

CC	= gcc

RM	= rm -f

CFLAGS  = -I ../include
LDFLAGS = -I ../include
LDFLAGS+= -l my -L ../lib

NAME	= do_op

SRCS	= 	do_op.c \
		ops.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
