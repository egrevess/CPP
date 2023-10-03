# include "FlagTrap.hpp"
# include "ClapTrap.hpp"

FlagTrap::FlagTrap()
{

}

FlagTrap::FlagTrap (const std::string &name) : ClapTrap(name)
{
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << "FlagTrap " << this->_name << " is created" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap " << this->_name << " is destroyed" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->_name << "ask for a High fives " << std::endl;
}