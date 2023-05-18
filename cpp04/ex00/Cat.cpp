#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "the default constructor for Cat class\n";
    this->Type = "Cat";
}

Cat::Cat(const Cat &temp) : Animal()
{
    std::cout << "The copy constructor for Cat class\n";
    this->Type = temp.getType();
}

Cat &Cat::operator=(const Cat &temp)
{
    std::cout << "the copy opeartor for Cat class\n";
    if (this != &temp)
        this->Type = temp.getType();
    return (*this);
}

void Cat::makeSound() const 
{
    std::cout << "Meaw meaw!!\n";
}

Cat::~Cat()
{
    std::cout << "the destructor for Cat class\n";
}