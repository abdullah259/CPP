#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	this->_type = weapon_name;
}

Weapon::Weapon() {}

Weapon::~Weapon(void) {}

const std::string &Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}