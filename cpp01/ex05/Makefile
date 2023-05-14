NAME = Harl-2.0

src = main.cpp Harl.cpp

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all