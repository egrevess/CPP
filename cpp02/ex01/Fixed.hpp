#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

private:
	int	nb_float;
	static const int nb_bits = 8;

public:
        Fixed ();
		Fixed (const int &nb);
		Fixed (const float &nb);
		Fixed (const Fixed &copy);
        ~Fixed();
		Fixed	&operator=(const Fixed &copy);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif