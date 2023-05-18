#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *ownBrain;
public:
    // orthodox canonicla form
    Dog();
    Dog(const Dog &temp);
    Dog &operator=(const Dog &temp);
    ~Dog();
    //getters
    Brain *getOwnBrain() const;
    // random functions
    void makeSound() const;
};