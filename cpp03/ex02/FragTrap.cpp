#include "FragTrap.hpp"


void FragTrap::highFivesGuys(void)
{
    std::cout << this->Name << "High Five" << std::endl;
}
FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
	this->Name = Name;
	this->HitPoints = 100;
	this->Energy = 100; 
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
	this->Name = name;
	this->HitPoints = 100;
	this->Energy = 100; 
	this->AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
}

FragTrap &FragTrap::operator= (FragTrap const &obj)
{
	if (this != &obj)
    {
		this->Name = obj.Name;
        this->HitPoints = obj.HitPoints;
        this->Energy = obj.Energy;
        this->AttackDamage = obj.AttackDamage;
	}
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0 || this->Energy == 0)
		return ;
    std::cout << "FragTrap " << this->Name << " attacks "<< target << " causing " << this->AttackDamage <<" points of damage! " << std::endl;
	this->Energy--;
}