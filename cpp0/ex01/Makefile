CFLAGS	=	 -Wall -Wextra -Werror -std=c++98 -g
NAME	=	PhoneBook
SRC		=	Contact.cpp main.cpp  PhoneBook.cpp utils.cpp
OBJ		=	${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ):
	c++ $(CFLAGS) -c ${@:.o=.cpp} -o ${@}

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

PHONY: all clean fclean re