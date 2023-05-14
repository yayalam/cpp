NAME = Unnecessary-violence

src = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all