#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	~Zombie();
	void	setName(std::string zname);
	void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif