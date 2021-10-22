SRCS	=	AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	ex03

INCL	=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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