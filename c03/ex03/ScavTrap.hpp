#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ~ScavTrap(void);
        ScavTrap(std::string name);
        void attack(const std::string& target);
        void guardGate();
};

#endif