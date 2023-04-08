#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap DefaultTank;
	DefaultTank.attack("Dummy Tank");
	DefaultTank.takeDamage(DefaultTank.get_attack_damge());
	DefaultTank.beRepaired(10);
	DefaultTank.attack("Dummy Tank");
	ScavTrap Tank2("Tank2");
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(Tank2.get_attack_damge());
	Tank2.beRepaired(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(Tank2.get_attack_damge());
	Tank2.takeDamage(Tank2.get_attack_damge());
	Tank2.attack("Dummy Tank 2");
	Tank2.guardGate();

	FragTrap F_Tank("F_Tank");
	F_Tank.attack("Dummy Tank 3");
	F_Tank.takeDamage(F_Tank.get_attack_damge());
	F_Tank.beRepaired(10);
	F_Tank.attack("Dummy Tank 3");
	F_Tank.takeDamage(F_Tank.get_attack_damge());
	F_Tank.takeDamage(F_Tank.get_attack_damge());
	F_Tank.attack("Dummy Tank 3");
	F_Tank.highFivesGuys();

	// Test if you want to delete derived class first
    // FragTrap* Ptank2 = new FragTrap("Tank2");
	// Ptank2->attack("Dummy Tank 2");
	// Ptank2->takeDamage(Ptank2->get_attack_damge());
	// Ptank2->beRepaired(10);
	// Ptank2->attack("Dummy Tank 2");
	// Ptank2->takeDamage(Ptank2->get_attack_damge());
	// Ptank2->takeDamage(Ptank2->get_attack_damge());
	// Ptank2->attack("Dummy Tank 2");
	// Ptank2->highFivesGuys();

    // delete Ptank2;
}