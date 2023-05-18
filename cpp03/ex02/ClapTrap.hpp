#include<iostream>

class ClapTrap
{
protected:    
    std::string Name;
    int HitPoints;
    int Energy;
    int AttackDamage;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap const &obj);
    ClapTrap &operator= (ClapTrap const &obj);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    unsigned int Get_HitPoint();
    void ShowHea();
    unsigned int Get_Energy();
    unsigned int Get_AttackDamage();
    
};