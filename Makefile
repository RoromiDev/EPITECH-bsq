##
## Makefile for makefile in /home/herbaux_a/Piscine_C_bistromathique
## 
## Made by jean-sebastien herbaux
## Login   <herbaux_a@epitech.net>
## 
## Started on  Thu Oct 29 15:07:07 2015 jean-sebastien herbaux
## Last update Fri Dec 18 14:33:56 2015 Romain Deguerville
##

NAME	=	bsq

RM	=	rm -f

SRC	=	src/main.c \
		src/create_tab.c \
		src/posey.c \
		src/strlen_bn.c \
		src/strlen_nb_line.c \
		src/test_segfault.c \
		src/test_tab.c

OBJ	=	$(SRC:.c=.o)

GCC	=	gcc

CFLAGS	+=	-I./include \
		-Wall -Werror -W

LDFLAGS	+=	-L./lib -lmy


all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my/
		$(GCC) $(CFLAGS) $? $(LDFLAGS) -o $@

clean:
	$(RM) $(OBJ)
	make clean -C ./lib/my/

./include/my.h:
	make -C ./lib/my

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./lib/my/

re:	fclean all

.PHONY:	all clean fclean re

%.o: %.c ./include/my.h
	$(CC) $(CFLAGS) -c -o $@ $<

