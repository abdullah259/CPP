#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << ": Zombie start ..." << std::endl;
}

Zombie::Zombie(void) {return ;}

Zombie::~Zombie()
{
	std::cout << this->name << ": Zombie destroyed ..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}