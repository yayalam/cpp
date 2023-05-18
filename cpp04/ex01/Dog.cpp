#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "the default constructor for Dog class\n";
    this->Type = "Dog";
    this->ownBrain = new Brain();
}

Dog::Dog(const Dog &temp) : Animal()
{
    std::cout << "The copy constructor for Dog class\n";
    this->Type = temp.getType();
    this->ownBrain = new Brain();
    this->ownBrain = temp.getOwnBrain();
}

Dog &Dog::operator=(const Dog &temp)
{
    std::cout << "the copy opeartor for Dog class\n";
    if (this == &temp)
        return (*this);
    this->Type = temp.getType();
    this->~Dog();
    this->ownBrain = new Brain();
    this->ownBrain = temp.getOwnBrain();
    return (*this);
}

Brain *Dog::getOwnBrain() const
{
    return ownBrain;
}

void Dog::makeSound() const 
{
    std::cout << "Bark bark!!\n";
}

Dog::~Dog()
{
    std::cout << "the destructor for Dog class\n";
    delete this->ownBrain;
}