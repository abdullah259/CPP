#ifndef DIAMOND_HPP
# define DIAMOND_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(void);
        ~DiamondTrap(void);
        using ScavTrap::attack;
        void whoAmI();
        void printStats();
    private:
        std::string _name;
};

#endif