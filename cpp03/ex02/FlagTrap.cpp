# include "FlagTrap.hpp"
# include "ClapTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap()
{
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << "FlagTrap Constructor default called" << std::endl;
}

FlagTrap::FlagTrap (const std::string &name) : ClapTrap(name)
{
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << "FlagTrap " << this->_name << " is created" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy) : ClapTrap(copy)
{
	std::cout << "FlagTrap copy constructor called\n";
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap " << this->_name << " is destroyed" << std::endl;
}
FlagTrap	&FlagTrap::operator=(const FlagTrap &copy)
{
	if (this != &copy) { // Vérification d'auto-affectation
        ClapTrap::operator=(copy); // Appel de l'opérateur d'affectation de ClapTrap
    }
    return *this;
}


void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->_name << " ask for a High fives " << std::endl;
}