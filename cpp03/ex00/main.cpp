#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap = ClapTrap("Clap");
    ClapTrap Trap = ClapTrap("Trap");

    Clap.ShowHea();

    Clap.attack("trap");
    Clap.ShowHea();
    Clap.beRepaired(10);
    Clap.ShowHea();
    Clap.attack("trap");
    Clap.attack("trap");
    Trap.takeDamage(10);

    Trap.attack("clap");

    return 0;
}