#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Defalut construction called" << std::endl;
    _name = "Defalut";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name construction called" << std::endl;
    _name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
    std::cout << "FragTrap copy Constructor Called" << std::endl;
    Attack_damage = other.Attack_damage;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    _name = other._name;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap copy assignment constructor called" << std::endl;
    if (&rhs == this)
        return (*this);
    Attack_damage = rhs.Attack_damage;
    Hit_points = rhs.Hit_points;
    Energy_points = rhs.Energy_points;
    _name = rhs._name;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << _name << ": FragTrap HIGHHH FIVE" << std::endl;
}