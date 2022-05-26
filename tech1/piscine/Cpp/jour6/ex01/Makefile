##
## EPITECH PROJECT, 2021
## Paradigms Seminar
## File description:
## makefile
##

NAME	=	my_convert_temp

CXX	=	g++

RM	=	rm -f

SRCS	=	main.cpp \

OBJS	=	$(SRCS:.cpp=.o)

CXXFLAGS	=	-std=c++20 -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(OBJS) -o $(NAME) $(CXXFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re