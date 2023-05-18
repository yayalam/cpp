#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(ScavTrap const &obj);
        ScavTrap &operator= (ScavTrap const &obj);
        ScavTrap(std::string name);
        void guardGate();
        void attack(const std::string& target);
};