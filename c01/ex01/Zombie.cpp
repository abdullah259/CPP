#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = name;
	std::cout << this->name << ": Zombie start ..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": Zombie dead ..." << std::endl;
}

void	Zombie::setName(std::string zname)
{
	this->name = zname;
}