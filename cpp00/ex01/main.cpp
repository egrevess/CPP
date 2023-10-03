/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:22:02 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 09:22:05 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() 
{
	PhoneBook 	phonebook;
	std::string	str;

	do 
	{
		std::cout << "Enter a command ADD or SEARCH or EXIT" << std::endl;
		std::getline(std::cin, str);
		if (str == "ADD")
			phonebook.add();
		else if(str == "SEARCH")
			phonebook.search();
	} while (str != "EXIT");
	return(0);
}