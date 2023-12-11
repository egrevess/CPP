#include "Fixed.hpp"

Fixed::Fixed()
{
	this->nb_float = 0;
	std::cout << "Default constructor called" << std::endl ;
}

Fixed::Fixed (const int &nb)
{
	this->nb_float = nb << this->nb_bits; // décale nb de 8 bits vers la gauche 
	std::cout << "Int constructor called" << std::endl ;
}

Fixed::Fixed (const float &nb)
{
	this->nb_float = roundf(nb * (1 << this->nb_bits));
	std::cout << "Float constructor called" << std::endl ;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl ;
	*this = copy;
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

float Fixed::toFloat( void ) const
{
	return ((float) this->nb_float / (1 << this->nb_bits));
}

int Fixed::toInt( void ) const 
{
	return (this->nb_float >> this->nb_bits);
}

int Fixed::getRawBits(void) const
{
	return (this->nb_float);
}

void	Fixed::setRawBits(const int raw)
{
	this->nb_float = raw;
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
} // os << fixed.toFloat(); : Cela appelle la méthode toFloat() de l'objet Fixed, 
//qui convertit 
//sa valeur en virgule fixe en un nombre flottant. Puis, 
//cet opérateur << insère ce nombre flottant dans le flux os.