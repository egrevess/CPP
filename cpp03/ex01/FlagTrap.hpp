#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
private:
		std::string _name;
		unsigned int	_hit_point;
		unsigned int	_energy_point;
		unsigned int	_attack_damage;

public:
        FlagTrap ();
		FlagTrap(const std::string &name);
        ~FlagTrap();
		
		void highFivesGuys(void);

};

#endif