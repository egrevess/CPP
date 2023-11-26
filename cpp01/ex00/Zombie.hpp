/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:54:50 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/23 10:30:00 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	private:
		std::string _name;

	public:
		Zombie (std::string name);
		~Zombie (void);

		void announce(void) const;
};

#endif