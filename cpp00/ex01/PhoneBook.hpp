/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:11:40 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 09:40:14 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
# include <cctype>

class PhoneBook {

private:
	Contact	_contact[8];
	int		_nb_contact;
	int		_index;

	std::string	_change_string(std::string str) const;
	void		_display_contact() const;
	std::string	_recup_str(std::string msg) const;

public:
	PhoneBook (void); // constructeur , ils n'ont tous les deux pas de type de retour , on peut quand même mettre un return 
	~PhoneBook (void); // destructeur avec une vague en plus 

	void	add();
	void	search() ;
};

#endif