/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:16:19 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 09:37:08 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::put_first_name(std::string firstname) 
{
	this->_first_name = firstname;
}

void	Contact::put_last_name(std::string lastname) 
{
	this->_last_name = lastname;
}

void	Contact::put_nickname(std::string nickname) 
{
	this->_nickname = nickname;
}

void	Contact::put_number(std::string number) 
{
	this->_number = number;
}

void	Contact::put_secret(std::string	secret) 
{
	this->_secret = secret;
}

std::string	Contact::get_first_name() const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name() const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname() const
{
	return (this->_nickname);
}

std::string	Contact::get_number() const
{
	return (this->_number);
}

std::string	Contact::get_secret() const
{
	return (this->_secret);
}