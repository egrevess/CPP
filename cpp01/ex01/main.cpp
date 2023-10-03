/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:10:35 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 11:40:07 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	int i = 0;

	Zombie *zombie = zombieHorde(3 , "Foo");
	while(i < 3)
	{
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
	return(0);
}