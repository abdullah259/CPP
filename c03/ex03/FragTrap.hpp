#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif