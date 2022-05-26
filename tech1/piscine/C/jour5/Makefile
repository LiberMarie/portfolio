##
## EPITECH PROJECT, 2021
## sokoban
## File description:
## makefile
##


SRC	=	string.c  					\
		append.c 					\
		compar.c \

OBJ	=	$(SRC:.c=.o) \

NAME 	=	a.out

CFLAGS	=	-g -std=gnu17 -Wall -Wextra -I./include/

LDFLAGS =	-Iinclude -L. -lstring

all:	$(OBJ)
		ar crs libstring.a string.o append.o compar.o

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) a.out
	$(RM) libstring.a string.o

re:	fclean all

lib/libmy.a:
	gcc --std=gnu17 -Wall -Wextra -c string.c

.Phony: all clean fclean re
