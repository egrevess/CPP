/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:10:15 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 11:43:22 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie : " << this->_name << " is created " << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie : " << this->_name << " is destroyed " << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::put_name(std::string name)
{
	this->_name = name;
}