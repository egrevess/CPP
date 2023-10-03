#include "Fixed.hpp"

 Fixed::Fixed()
 {
	this->nb_float = 0;
	std::cout << "Default constructor called" << std::endl ;
 }

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl ;
	this->nb_float = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl ;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb_float = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl ;
	return (this->nb_float);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl ;
	this->nb_float = raw;
}