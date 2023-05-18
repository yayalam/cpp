#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    // orthodox canonicla form
    WrongCat();
    WrongCat(const WrongCat &temp);
    WrongCat &operator=(const WrongCat &temp);
    ~WrongCat();
    // random functions
    void makeSound() const;
};