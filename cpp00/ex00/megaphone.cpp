/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:43:43 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/21 12:28:15 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <sstream>

int	main(int ac,char **av)
{
	if (ac >= 2)
	{
		std::stringstream ss;
		for (int index = 1; index < ac ; index++)
		{
			std::string str = av[index];
			std::transform(str.begin(), str.end(), str.begin(), toupper);
			ss << str;
		}
		std::cout << ss.str() << std::endl;
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
}