#include "Zombie.hpp"

int main(void)
{
	randomChump("Abdullah");
	Zombie *new_zombie = newZombie("Ghazi");
	new_zombie->announce();
	delete new_zombie;
}