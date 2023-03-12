#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *new_zombie = new Zombie[N];
	for (size_t i = 0; i < (size_t)N; i++)
	{
		new_zombie[i].setName(name);
	}
	return new_zombie;
}