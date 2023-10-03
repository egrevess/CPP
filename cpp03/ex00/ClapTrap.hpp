#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{

private:
		std::string _name;
		unsigned int	_hit_point;
		unsigned int	_energy_point;
		unsigned int	_attack_damage;


public:
        ClapTrap ();
		ClapTrap(const std::string name);
        ~ClapTrap();
		void attack(const std::string& target); // reférencement pour éviter de faire une copie
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setAttack(const unsigned int amount);
		const std::string& getName();
		const unsigned int& getAttackDamage();

};

#endif