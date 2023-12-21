NAME = btc

SRC = main.cpp BitcoinExchange.cpp

HEADER = BitcoinExchange.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
