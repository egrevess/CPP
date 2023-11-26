/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:00:05 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/23 12:00:06 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl{

private:
	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );


public:
	Harl();
	~Harl();
	void	complain( std::string level);
};

#endif