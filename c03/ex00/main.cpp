#include "ClapTrap.hpp"

int main()
{
    ClapTrap player;

    player.attack("abdullah");
    player.takeDamage(5);
    player.attack("mm");
    player.beRepaired(3);
    player.attack("mm");
    player.takeDamage(10);
    player.attack("mm");
    player.beRepaired(9);
}