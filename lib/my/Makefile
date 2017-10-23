##
## Makefile for make in /home/deguer_r/TmpPrintf/Printf/lib/my
## 
## Made by Romain Deguerville
## Login   <deguer_r@epitech.net>
## 
## Started on  Wed Nov 11 22:18:57 2015 Romain Deguerville
## Last update Fri Dec 18 14:51:25 2015 Romain Deguerville
##

CC	= gcc -Wall -Werror -W -ansi -pedantic

NAME	= libmy.a

RM	= rm -f

INC	= my.h \

SRC	= my_strlen.c \
	  my_bzero.c \
	  my_putchar.c \
	  my_putstr.c

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	 $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp $(INC) ../../include

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean
	$(RM) ../$(NAME)
	$(RM) ../../include/$(INC)

re:	fclean all

.PHONY:	all clean fclean re
