#pragma once

#include <iostream>

class WrongAnimal
{
protected:
    std::string Type;
public:
    //orthodox canonical form
    WrongAnimal();
    WrongAnimal(const WrongAnimal& temp);
    WrongAnimal &operator=(const WrongAnimal& temp);
    ~WrongAnimal();
    //getter
    std::string getType() const;
    //random functions
    void makeSound() const;
};
