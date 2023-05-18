#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &obj);
        FragTrap &operator= (FragTrap const &obj);
        void attack(const std::string& target);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif