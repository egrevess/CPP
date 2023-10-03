/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:39:44 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 11:07:07 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int	main()
{
	Zombie *zombie;

	zombie = newZombie("Foo");
	zombie->announce();
	randomChump("FOO");
	delete zombie;
	return 0;
}