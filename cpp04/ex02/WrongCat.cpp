#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "the default constructor for WrongCat class\n";
    this->Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &temp) : WrongAnimal()
{
    std::cout << "The copy constructor for WrongCat class\n";
    this->Type = temp.getType();
}

WrongCat &WrongCat::operator=(const WrongCat &temp)
{
    std::cout << "the copy opeartor for WrongCat class\n";
    if (this != &temp)
        this->Type = temp.getType();
    return (*this);
}

void WrongCat::makeSound() const 
{
    std::cout << "Meaw meaw!!\n";
}

WrongCat::~WrongCat()
{
    std::cout << "the destructor for WrongCat class\n";
}