#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	michel("Michel");
	ClapTrap	claude("Claude");

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	//michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	//michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	//michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	//michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	michel.beRepaired(5);
	claude.setAttack(16);
	claude.attack(claude.getName());
	michel.takeDamage(claude.getAttackDamage());
	


/*
	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	michel.beRepaired(5);

	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	michel.beRepaired(5);
	
	michel.setAttack(3);
	michel.attack(claude.getName());
	claude.takeDamage(michel.getAttackDamage());
	michel.beRepaired(5);
	*/
	return 0;
}