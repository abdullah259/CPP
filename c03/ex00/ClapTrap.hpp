#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>


class ClapTrap
{
    private:
        std::string _name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap(const std::string name);
        ClapTrap(void);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &rhs);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int get_attack_damge();
};

#endif