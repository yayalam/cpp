#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor for Animal class\n";
    this->Type = "Random animal";
}

Animal::Animal(const Animal& temp)
{
    std::cout << "the Copy constructor for Animal class\n";
    this->Type = temp.Type;
}

Animal &Animal::operator=(const Animal& temp)
{
    std::cout << "Copy assignement opeartor of Animal class\n";
    if (this != &temp)
        this->Type = temp.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "the Destructor for Animal class\n";
}

std::string Animal::getType() const
{
    return (this->Type);
}