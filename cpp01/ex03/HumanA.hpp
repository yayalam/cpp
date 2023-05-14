#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &arme;
    public:
    HumanA(std::string name, Weapon &arme);
       void  attack();
       void setName(std::string name);
        std::string getName();
        

};
#endif