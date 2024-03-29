#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>


class ClapTrap
{
    protected:
        std::string _name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif