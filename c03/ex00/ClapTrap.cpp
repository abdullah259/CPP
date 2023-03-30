#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap() : _name("abd") , Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << " Default Constructor Called" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points -= 1;
    }
    else
    {
        if (Energy_points <= 0)
            std::cout << "there is no energy points left" << std::endl;
        else
            std::cout << "there is no hit point left" << std::endl;
    }
    std::cout << "Energy points : " << Energy_points << std::endl << "Hit Points :    " << Hit_points << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0) {
        Hit_points -= amount;
        if (Hit_points <= 0)
            std::cout << "after this damge the " << _name << " has died" << std::endl;
    }
    else
        std::cout << _name << "has died because there is no energy points left or hit point" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        Hit_points += amount;
        Energy_points -=1;
        std::cout << _name << ": Healed amount of " << amount << " using 1 Energy Point !" <<  std::endl; 
    }
    else
    {
        if (Energy_points <= 0)
            std::cout << "there is no energy points left" << std::endl;
        else
            std::cout << "there is no hit point left" << std::endl;
    }
}