
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->Name = Name;
	this->HitPoints = 100;
	this->Energy = 50; 
	this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &obj)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &obj)
    {
		this->Name = obj.Name;
        this->HitPoints = obj.HitPoints;
        this->Energy = obj.Energy;
        this->AttackDamage = obj.AttackDamage;
	}
	return *this;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
	this->Name = name;
	this->HitPoints = 100;
	this->Energy = 50; 
	this->AttackDamage = 20;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0 || this->Energy == 0)
	{
		std::cout << "ScavTrap " << this->Name << "  : i can't do anything" << std::endl;
		return ;
	}
    std::cout << "ScavTrap " << this->Name << " attacks "<< target << " causing " << this->AttackDamage <<" points of damage! " << std::endl;
	this->Energy--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode" << std::endl;
}
