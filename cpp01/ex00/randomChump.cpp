#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *ran = new Zombie;
    ran->setName(name);
    ran->announce();
    delete ran;
}