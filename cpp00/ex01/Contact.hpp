/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:14:58 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/04/27 09:36:45 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {

private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
	
public:
	Contact (void);
	~Contact (void);
	
	void	put_first_name(std::string firstname);
	void	put_last_name(std::string lastname);
	void	put_nickname(std::string nickname);
	void	put_number(std::string number);
	void	put_secret(std::string	secret);

	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_number() const;
	std::string	get_secret() const;
};

#endif