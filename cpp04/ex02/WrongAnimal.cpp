#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor for WrongAnimal class\n";
    this->Type = "Random WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& temp)
{
    std::cout << "the Copy constructor for WrongAnimal class\n";
    this->Type = temp.Type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& temp)
{
    std::cout << "Copy assignement opeartor of WrongAnimal class\n";
    if (this != &temp)
        this->Type = temp.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "the Destructor for WrongAnimal class\n";
}

std::string WrongAnimal::getType() const
{
    return (this->Type);
}

void WrongAnimal::makeSound() const 
{
    std::cout << "Random WrongAnimals voices.\n";
}