#include "FragTrap.hpp"


int main()
{
    ClapTrap ko("apah");
    ko.ShowHea();
    FragTrap po("khtak");
    po.ShowHea();
    po.takeDamage(1006);
    po.ShowHea();
    po.attack("ferda");
    po.ShowHea();
    po.highFivesGuys();
}