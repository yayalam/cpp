NAME = animal

src = main.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp Dog.cpp Cat.cpp Brain.cpp

hd = Animal.hpp WrongCat.hpp WrongAnimal.hpp Dog.hpp Cat.hpp Brain.hpp

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src) $(hd)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all