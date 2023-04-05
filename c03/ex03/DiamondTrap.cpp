#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap name constructor called" << std::endl;
    // ClapTrap::_name = _name + "_clap_name";
    this->_name = name;
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap() : _name("Defalut")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    ClapTrap::_name = _name + "_clap_name";
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor constructor called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "It is my name : " << _name << " and this is the ClapTrap name : " << ClapTrap::_name << std::endl;
}

void DiamondTrap::printStats()
{
	std::cout << "HP is: "<< Hit_points <<std::endl;
	std::cout << "Energy points is: "<< Energy_points <<std::endl;
	std::cout << "Damage is: "<< Attack_damage <<std::endl;
}