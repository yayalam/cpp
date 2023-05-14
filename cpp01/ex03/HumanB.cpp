#include "HumanB.hpp"


    HumanB::HumanB(std::string name): name(name){
        
    }

void HumanB::setName(std::string name)
{
    this->name = name;
}

std::string HumanB::getName(){
    return this->name;
}

void HumanB::setWeapon(Weapon &arme)
{
    this->arme = &arme;
}
void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << arme->getType() << std::endl;
}
