#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

void    ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << "causing <damage> points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points <= 0 || Hit_points >= ){}
}