#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
// int main()
// {
//     FragTrap player("Tank1");
//     // ScavTrap player2("Tank2");

//     player.attack("Tank2");
//     player.takeDamage(20);
//     player.attack("Tank2");
//     player.attack("abdullah");
//     player.takeDamage(102);
//     player.takeDamage(10);
//     player.attack("abdullah");
//     player.highFivesGuys();
// }
int main(void) 
{
	// ClapTrap DefaultTank;
	// DefaultTank.attack("Dummy Tank");
	// DefaultTank.takeDamage(30);
	// DefaultTank.beRepaired(10);
	// DefaultTank.attack("Dummy Tank");
	ScavTrap Tank2("Tank2");
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(9);
	Tank2.beRepaired(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(102);
	Tank2.takeDamage(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.guardGate();

	FragTrap F_Tank("F_Tank");
	F_Tank.attack("Dummy Tank 3");
	F_Tank.takeDamage(9);
	F_Tank.beRepaired(10);
	F_Tank.attack("Dummy Tank 3");
	F_Tank.takeDamage(102);
	F_Tank.takeDamage(10);
	F_Tank.attack("Dummy Tank 3");
	F_Tank.highFivesGuys();
	return 0;
}