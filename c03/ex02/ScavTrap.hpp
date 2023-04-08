#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const ScavTrap &other);
        ~ScavTrap(void);
        ScavTrap &operator=(const ScavTrap &rhs);
        ScavTrap(const std::string name);
        void attack(const std::string& target);
        void guardGate();
};

#endif