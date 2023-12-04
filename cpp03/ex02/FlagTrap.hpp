#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
public:
        FlagTrap ();
		FlagTrap(const std::string &name);
		FlagTrap(const FlagTrap &copy);
        ~FlagTrap();
		FlagTrap	&operator=(const FlagTrap &copy);
		void highFivesGuys(void);

};

#endif