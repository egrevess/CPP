/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:09:59 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/23 12:00:42 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}