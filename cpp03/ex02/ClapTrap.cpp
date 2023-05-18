#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Default Constructor called" << std::endl;
    this->Name = Name;
    this->HitPoints = 10;
    this->Energy = 10;
    this->AttackDamage = 10;
}

void ClapTrap::attack(const std::string& target)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        Energy--;
    }
    else
        std::cout << "Cant attack" << std::endl;
}

void ClapTrap::ShowHea()
{
    std::cout << "Hitpoint = "<< HitPoints <<" Energy = "<< Energy <<" Attd = "<<AttackDamage<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints == 0 || this->Energy == 0)
	{
		std::cout << "ClapTrap " << this->Name << "  : is die" << std::endl;
		return ;
	}
    std::cout << "ClapTrap " << Name << " Takes " << amount << " point damage!" << std::endl;
    if (HitPoints - (int)amount < 0)
        HitPoints = 0;
    else
        HitPoints -= (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy > 0 && HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " is healing " << amount << " Hit points" << std::endl;
        HitPoints += amount;
        Energy--;
    }
    else
        std::cout << "Cant repair no health or energy points left" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->Name);
}

unsigned int ClapTrap::Get_HitPoint()
{
    return  (this->HitPoints);
}

unsigned int ClapTrap::Get_Energy()
{
    return (this->Energy);
}

unsigned int ClapTrap::Get_AttackDamage()
{
    return (this->AttackDamage);
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
    std::cout << "Default copy Constructor called" << std::endl;
    this->Name = obj.Name;
    this->HitPoints = obj.HitPoints;
    this->Energy = obj.Energy;
    this->AttackDamage = obj.AttackDamage;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & obj)
{
    std::cout << "Copy assignement called" << std::endl;
    this->Name = obj.Name;
    this->HitPoints = obj.HitPoints;
    this->Energy = obj.Energy;
    this->AttackDamage = obj.AttackDamage;
    return (*this);
}