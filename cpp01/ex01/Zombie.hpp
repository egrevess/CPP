/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:10:53 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/23 10:48:37 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
	private:
		std::string _name;

	public:
		Zombie();
		Zombie (std::string name);
		~Zombie (void);

		void announce(void) const;
		void put_name(std::string name);
};

#endif