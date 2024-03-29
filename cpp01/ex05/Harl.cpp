/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:00:08 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/23 12:00:10 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Hello Harl\n";
}

Harl::~Harl()
{
	std::cout << "Bye Harl\n";
}

void	Harl::_debug()
{
	std::cout << "Debug : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl ;
}

void	Harl::_info()
{
	std::cout << "Info : I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger ! If you did, I wouldn\'t be asking for more !" << std::endl ;
}

void	Harl::_warning()
{
	std::cout << "Warning : I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl ;
}

void	Harl::_error()
{
	std::cout << "Error :This is unacceptable ! I want to speak to the manager now." << std::endl ;
}

void Harl::complain( std::string level)
{
	std::string	levels[] = {"debug", "info", "warning", "error"};
	void (Harl::*ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	for (int i = 0; i < 4 ; i++)
	{
		if(level == levels[i])
		{
			(this->*ptr[i])();
			break ;
		}
	}
}