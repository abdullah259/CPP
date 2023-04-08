#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap DefaultTank;
	DefaultTank.attack("Dummy Tank");
	DefaultTank.takeDamage(DefaultTank.get_attack_damge());
	DefaultTank.beRepaired(DefaultTank.get_attack_damge());
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


    // Test if you want to delete derived class first
    // ScavTrap* Ptank2 = new ScavTrap("Tank2");
	// Ptank2->attack("Dummy Tank 2");
	// Ptank2->takeDamage(Ptank2->get_attack_damge());
	// Ptank2->beRepaired(10);
	// Ptank2->attack("Dummy Tank 2");
	// Ptank2->takeDamage(Ptank2->get_attack_damge());
	// Ptank2->takeDamage(Ptank2->get_attack_damge());
	// Ptank2->attack("Dummy Tank 2");
	// Ptank2->guardGate();

    // delete Ptank2;
}