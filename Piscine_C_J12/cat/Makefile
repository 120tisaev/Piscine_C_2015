##
## Makefile for  in /home/henon_t/rendu/Piscine_C_J12/cat
## 
## Made by Thomas Henon
## Login   <henon_t@epitech.net>
## 
## Started on  Wed Oct 14 10:34:11 2015 Thomas Henon
## Last update Wed Oct 14 17:40:13 2015 Thomas Henon
##

CC	= gcc

CFLAGS  = -I ../include
LDFLAGS = -I ../include
LDFLAGS+= -l my -L ../lib

NAME	= cat

SRCS	= cat.c

OBJS	= $(SRCS:.c=.o)

RM	= rm -f



$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
