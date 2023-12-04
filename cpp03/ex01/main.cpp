#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	Nico("nico");
	ScavTrap	Louise("louise");
	ClapTrap	claude("Claude");

	Nico.guardGate();
	Louise.attack("Nico");
	Nico.takeDamage(Louise.getAttackDamage());
	claude.attack("Nico");
	return 0;
}