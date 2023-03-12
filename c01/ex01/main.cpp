#include "Zombie.hpp"

int main()
{
	Zombie *zHore = zombieHorde(3, "abduu");
	for (size_t i = 0; i < 3; i++)
	{
		zHore[i].announce();
	}
	delete [] zHore;
}