/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:10:40 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/30 18:47:31 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
	Weapon &_weapon; // why ? 
	std::string _name;

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();
};

#endif