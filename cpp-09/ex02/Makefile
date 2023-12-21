NAME = PmergeMe

SRC = main.cpp PmergeMe.cpp

HEADER = PmergeMe.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

CPP = c++

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
