/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:13:11 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/28 13:05:27 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

# include <iostream>

class Weapon{

private:
	std::string _type;

public:
	Weapon (std::string type);
	~Weapon();
	const std::string& getType();
	void setType(std::string str);
};

#endif