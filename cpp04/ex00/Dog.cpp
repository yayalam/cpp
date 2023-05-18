#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "the default constructor for Dog class\n";
    this->Type = "Dog";
}

Dog::Dog(const Dog &temp) : Animal()
{
    std::cout << "The copy constructor for Dog class\n";
    this->Type = temp.getType();
}

Dog &Dog::operator=(const Dog &temp)
{
    std::cout << "the copy opeartor for Dog class\n";
    if (this != &temp)
        this->Type = temp.getType();
    return (*this);
}

void Dog::makeSound() const 
{
    std::cout << "Bark bark!!\n";
}

Dog::~Dog()
{
    std::cout << "the destructor for Dog class\n";
}