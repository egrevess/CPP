/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:54:50 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 11:38:30 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
	std::string _name;

public:
	Zombie (std::string name); // constructeur , ils n'ont tous les deux pas de type de retour , on peut quand même mettre un return 
	~Zombie (void); // destructeur avec une vague en plus 

	void announce(void);
};

#endif