SRCS	=	Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	ex00

INCL	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

CFLAGS	=	-Wall -Wextra -Werror

CC		=	clang++

STD		=	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(STD) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp	$(INCL)
			$(CC) $(STD) $(CFLAGS) -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re