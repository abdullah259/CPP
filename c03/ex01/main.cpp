#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ScavTrap player("Tank1");
    // ScavTrap player2("Tank2");

    // player.attack("Tank2");
    // player.takeDamage(player2.get_dam());
    // player.attack("Tank2");
    // player2.attack("abdullah");
    // player.takeDamage(102);
    // player.takeDamage(10);
    // player.attack("abdullah");
    // player.guardGate();
    ScavTrap Tank2("Tank2");
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(9);
	Tank2.beRepaired(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(102);
	Tank2.takeDamage(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.guardGate();
}