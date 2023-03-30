#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Defalut construction called" << std::endl;
    _name = "Defalut";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Defalut construction called" << std::endl;
    _name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Defalut destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << _name << ": FragTrap HIGHHH FIVE" << std::endl;
}