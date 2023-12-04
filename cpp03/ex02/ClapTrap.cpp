# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "";
	this->_hit_point = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
	std::cout << "Constructor (default) called" << std::endl;
}

ClapTrap::ClapTrap (const std::string &name)
{
	this->_name = name;
	this->_hit_point = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
	std::cout << "Player " << this->_name << " is created" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hit_point = copy._hit_point;
	this->_energy_point = copy._energy_point;
	this->_attack_damage = copy._attack_damage;
	std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Player " << this->_name << " is destroyed" << std::endl;
}
ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
	this->_name = copy._name;
	this->_hit_point = copy._hit_point;
	this->_energy_point = copy._energy_point;
	this->_attack_damage = copy._attack_damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	//std::cout << "Player " << this->_name << " has " << this->_energy_point << " energy_point" << std::endl;
	if (this->_energy_point > 0 && this->_hit_point > 0)
	{
		this->_energy_point = this->_energy_point - 1;
		std::cout << "Player " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage! "
		<< std::endl;
	}
	else if (this->_energy_point <= 0 )
	{
		std::cout << "Player " << this->_name << " has not enough energy points to attack" << target << std::endl;
	}
	else if (this->_hit_point <= 0 )
		std::cout << "Player " << this->_name << " has not enough hit points to attack" << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
		if (amount > 0)
		{
			if (this->_hit_point >= amount)
				this->_hit_point = this->_hit_point - amount;
			else
				this->_hit_point = 0;
			std::cout << "Player " << this->_name << " takes damage of " << amount << " hit points" << std::endl;
		}
		//std::cout << "Player " << this->_name << " has " << this->_hit_point << " hit point" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	//std::cout << "Player " << this->_name << " has " << this->_energy_point << " energy_point" << std::endl;
	//std::cout << "Player " << this->_name << " has " << this->_hit_point << " hit points" << std::endl;
	if (this->_energy_point > 0 && this->_hit_point > 0)
	{
		this->_hit_point = this->_hit_point + amount;
		this->_energy_point = this->_energy_point - 1;
		std::cout << "Player " << this->_name << " are repaired of " << amount << " hit points" << std::endl;
	}
	else if (this->_energy_point <= 0 )
		std::cout << "Player " << this->_name << " has not enough energy points to be repaired " << std::endl;
	else if (this->_hit_point <= 0 )
		std::cout << "Player " << this->_name << " has not enough hit points to be repaired" << std::endl;
}

void ClapTrap::setAttack(const unsigned int amount)
{
	if (this->_energy_point > 0 && this->_hit_point > 0)
		this->_attack_damage = amount;
	else
		this->_attack_damage = 0;
}

const std::string& ClapTrap::getName()
{
	return (this->_name);
}

const unsigned int& ClapTrap::getAttackDamage()
{	
	return(this->_attack_damage);
}