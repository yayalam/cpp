#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *ownBrain;
public:
    // orthodox canonicla form
    Cat();
    Cat(const Cat &temp);
    Cat &operator=(const Cat &temp);
    ~Cat();
    //getters
    Brain *getOwnBrain() const;
    // random functions
    void makeSound() const;
};