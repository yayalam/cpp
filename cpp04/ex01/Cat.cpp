#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "the default constructor for Cat class\n";
    this->Type = "Cat";
    this->ownBrain = new Brain();
}

Cat::Cat(const Cat &temp) : Animal()
{
    std::cout << "The copy constructor for Cat class\n";
    this->Type = temp.getType();
    this->ownBrain = new Brain();
    this->ownBrain = temp.getOwnBrain();
}

Cat &Cat::operator=(const Cat &temp)
{
    std::cout << "the copy opeartor for Cat class\n";
    if (this == &temp)
        return (*this);
    this->Type = temp.getType();
    this->~Cat();
    this->ownBrain = new Brain();
    this->ownBrain = temp.getOwnBrain();
    return (*this);
}

Brain *Cat::getOwnBrain() const
{
    return ownBrain;
}

void Cat::makeSound() const 
{
    std::cout << "Meaw meaw!!\n";
}

Cat::~Cat()
{
    std::cout << "the destructor for Cat class\n";
    delete this->ownBrain;
}