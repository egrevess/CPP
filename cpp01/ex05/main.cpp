/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:00:02 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/23 12:00:03 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string level;
	std::cin >> level;
	do
	{
		harl.complain(level);
		std::cin >> level;
	} while (level != "exit");
	return 0;
}