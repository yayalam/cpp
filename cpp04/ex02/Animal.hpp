#pragma once

#include <iostream>

class Animal
{
protected:
    std::string Type;
public:
    //orthodox canonical form
    Animal();
    Animal(const Animal& temp);
    Animal &operator=(const Animal& temp);
    virtual ~Animal();
    //getter
    std::string getType() const;
    //random functions
    virtual void makeSound() const = 0;
};
