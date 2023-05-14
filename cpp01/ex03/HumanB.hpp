#ifndef HUMANB_HPP
#define HUMANB_HPP


#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private :
        std::string name;
        Weapon *arme;
    public:
    HumanB(std::string name);
        void setName(std::string name);
        std::string getName();
        void attack();
        void setWeapon(Weapon &arme);
};
#endif