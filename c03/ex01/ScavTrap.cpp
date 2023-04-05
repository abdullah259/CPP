#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Defalut constructors called" << std::endl;
    _name = "Defalut";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap name constructors called" << std::endl;
    _name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructors called" << std::endl;
    _name = other._name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &rhs){
    std::cout << "ScavTrap copy assignment constructor called" << std::endl;
    if (&rhs == this)
        return (*this);
    _name = rhs._name;
    Hit_points = rhs.Hit_points;
    Energy_points = rhs.Energy_points;
    Attack_damage = rhs.Attack_damage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (Hit_points > 0 && Energy_points > 0)
    {
        std::cout << "ScavTrap :" << _name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points -= 1;
    }
    else
    {
        if (Energy_points <= 0)
            std::cout << "ScavTrap :" << "there is no energy points left" << std::endl;
        else
            std::cout << "ScavTrap :" << "there is no hit point left" << std::endl;
    }
    std::cout << "ScavTrap :" << "Energy points : " << Energy_points << std::endl << "Hit Points :    " << Hit_points << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << _name << ": is now in Gate keeper mode" << std::endl;
}