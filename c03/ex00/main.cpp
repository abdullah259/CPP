#include "ClapTrap.hpp"

int main()
{
    ClapTrap player;

    player.attack("abdullah");
    player.takeDamage(player.get_attack_damge());
    player.attack("mm");
    player.beRepaired(player.get_attack_damge());
    player.attack("mm");
    player.takeDamage(player.get_attack_damge());
    player.attack("mm");
    player.beRepaired(player.get_attack_damge());
}