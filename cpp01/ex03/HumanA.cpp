/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:10:13 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/30 18:47:25 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon), _name(name)
{
	std::cout << "HumanA " << name << " created with " << weapon.getType();
	std::cout << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name << " is destroyed\n" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}