#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arme): name(name) , arme(arme){

}

void  HumanA::attack(){
    std::cout << this->name << " attacks with their " << arme.getType() << std::endl;
   }
void HumanA::setName(std::string name)
{
    this->name = name;
}

std::string HumanA::getName(){
    return name;
}