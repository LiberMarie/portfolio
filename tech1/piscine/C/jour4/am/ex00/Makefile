
##
## EPITECH PROJECT, 2022
## Z
## File description:
## makefile
##


SRC	=	z.c

OBJ	=	$(SRC:.c=.o) \

NAME 	=	z

CFLAGS	=	 -std=gnu17 -Wall -Wextra

all:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.Phony: all clean fclean re