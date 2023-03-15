#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(void);
	Weapon(std::string weapon_type);
	~Weapon(void);
	const 	std::string &getType();
	void	setType(std::string new_type);
};


#endif