#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
    // orthodox canonicla form
    Dog();
    Dog(const Dog &temp);
    Dog &operator=(const Dog &temp);
    ~Dog();
    // random functions
    void makeSound() const;
};