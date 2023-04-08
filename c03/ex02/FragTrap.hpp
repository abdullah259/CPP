#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &rhs);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif
