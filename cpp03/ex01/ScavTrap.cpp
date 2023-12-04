# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	std::cout << "Constructor ScavTrap (default) called \n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " is created" << std::endl;
}
ScavTrap::ScavTrap (const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called\n";
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " is destroyed" << std::endl;
}
ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	 if (this != &copy) { // Vérification d'auto-affectation
        ClapTrap::operator=(copy); // Appel de l'opérateur d'affectation de ClapTrap
    }
    return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_point > 0 && this->_hit_point > 0)
	{
		this->_energy_point = this->_energy_point - 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage! "
		<< std::endl;
	}
	else if (this->_energy_point <= 0 )
	{
		std::cout << "ScavTrap " << this->_name << " has not enough energy points to attack" << target << std::endl;
	}
	else if (this->_hit_point <= 0 )
		std::cout << "ScavTrap " << this->_name << " has not enough hit points to attack" << target << std::endl;
}


void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is entered in Gate keeper mode" << std::endl;
}