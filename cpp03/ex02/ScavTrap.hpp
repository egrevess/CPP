#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

private:
		std::string 	_name;
		unsigned int	_hit_point;
		unsigned int	_energy_point;
		unsigned int	_attack_damage;



public:
        ScavTrap ();
		ScavTrap(const std::string& name);
        ~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
		// referencement si on modifie la valeur dans une fonction elle ne sera pas modifiée ailleurs 
};

#endif