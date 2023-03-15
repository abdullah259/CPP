#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string _name, Weapon &weapon);
		~HumanA(void);
		void	attack();
	private:
		std::string _name;
		Weapon &_weapon;
};


#endif