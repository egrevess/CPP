#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
        ScavTrap ();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap &copy);
        ~ScavTrap();

		ScavTrap	&operator=(const ScavTrap &copy);
		void attack(const std::string& target);
		void guardGate();
		// referencement si on modifie la valeur dans une fonction elle ne sera pas modifiée ailleurs 
};

#endif