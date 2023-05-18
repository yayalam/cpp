#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
    // orthodox canonicla form
    Cat();
    Cat(const Cat &temp);
    Cat &operator=(const Cat &temp);
    ~Cat();
    // random functions
    void makeSound() const;
};