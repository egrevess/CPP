#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

int	main()
{
	FlagTrap	Nico("nico");
	FlagTrap	Louise("louise");
	ClapTrap	claude("Claude");

	Nico.highFivesGuys();
	Louise.attack("Nico");
	Nico.takeDamage(Louise.getAttackDamage());
	claude.attack("Nico");
	return 0;
}