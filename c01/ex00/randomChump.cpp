#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie n_zombie(name);
	n_zombie.announce();
}