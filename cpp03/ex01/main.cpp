
#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj1("Scav_1");
    ScavTrap obj2("Scav_2");

    obj1.attack("Scav_1");
    obj1.beRepaired(10);
    obj1.attack("Scav_1");
    obj1.attack("Scav_1");
    obj2.takeDamage(1000);
    obj2.attack("Scav_2");
    obj2.guardGate();

    return 0;
}