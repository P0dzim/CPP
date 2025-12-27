CFLAGS	=	 -Wall -Wextra -Werror -std=c++98
NAME	=	filter
SRC		=	main.cpp
OBJ		=	${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME) -I./

$(OBJ):
	c++ $(CFLAGS) -c ${@:.o=.cpp} -o ${@} -I./
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

PHONY: all clean fclean re