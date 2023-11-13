/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:19:55 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/10 14:46:01 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_nb_contact = 0;
	this->_index = 0;
	std::cout << "New phonebook created !" << std::endl;
}
PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook deleted !" << std::endl;
}

void	PhoneBook::add()
{
	this->_contact[this->_index].put_first_name(_recup_str("First name :"));
	this->_contact[this->_index].put_last_name(_recup_str("Last name :"));
	this->_contact[this->_index].put_nickname(_recup_str("Nickname :"));
	this->_contact[this->_index].put_number(_recup_str("Phone Number :"));
	this->_contact[this->_index].put_secret(_recup_str("Worst Secret :"));
	if (this->_nb_contact <= 7)
		this->_nb_contact++;
	if (this->_index < 7)
		this->_index++;
	else if (this->_index == 7)
		this->_index = 0;
	std::cout << "New contact is saved" << std::endl;
}

std::string	PhoneBook::_recup_str(std::string msg) const
{
	std::string	str;

	do {
		std::cout << msg << std::endl;
		std::getline(std::cin,str);
	} while (str.empty());
	return(str);
}

void	PhoneBook::search() const
{
	int			index;

	index = 0;
	if (this->_nb_contact == 0)
		std::cout << "No contacts to display " << std::endl;
	else 
	{
		std::cout << "Index     |First name| Last name|  Nickname" << std::endl;
		while (index < this->_nb_contact)
		{
			std::cout << PhoneBook::_change_string(std::to_string(index))<< "|";
			std::cout << PhoneBook::_change_string(this->_contact[index].get_first_name()) << "|";
			std::cout << PhoneBook::_change_string(this->_contact[index].get_last_name()) << "|" ;
			std::cout << PhoneBook::_change_string(this->_contact[index].get_nickname()) << std::endl;
			index++;
		}
		PhoneBook::_display_contact();
	}
}

void	PhoneBook::_display_contact() const
{
	std::string	contact;
	int			number;
	
	do
	{
		std::cout << "Enter a valid index" << std::endl;
		std::getline(std::cin, contact);
	} while (contact.size() != 1 || !isdigit(contact[0]));
	number = std::stoi(contact);
	if (number >= this->_nb_contact || number < 0)
			std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << "First name : " << this->_contact[number].get_first_name() << std::endl;
		std::cout << "Last name : " << this->_contact[number].get_last_name() << std::endl ;
		std::cout << "Nickname : " << this->_contact[number].get_nickname() << std::endl;
		std::cout << "Phone number : " << this->_contact[number].get_number() << std::endl;
		std::cout << "Worst secret : " << this->_contact[number].get_secret() << std::endl;
	}
}

std::string	PhoneBook::_change_string(std::string str) const
{
	int	len = str.size();

	if (len < 10)
	{
		std::string spaces(10 - len, ' ');
		str.insert(0, spaces);
	}
	else if (len > 10)
		str = str.substr(0, 9) + ".";
	return (str);	
}