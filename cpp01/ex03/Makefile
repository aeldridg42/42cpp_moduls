SRCS	=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	unnecessaryViolence

INCL	=	HumanA.hpp HumanB.hpp Weapon.hpp

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