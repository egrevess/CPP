#include "Fixed.hpp"

Fixed::Fixed()
{
	this->nb_float = 0;
}

Fixed::Fixed (const int &nb)
{
	this->nb_float = nb << this->nb_bits;
}

Fixed::Fixed (const float &nb)
{
	this->nb_float = roundf(nb * (1 << this->nb_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed()
{

}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	this->nb_float = copy.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return this->getRawBits() != fixed.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	res;

	res.setRawBits(this->getRawBits() + fixed.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	res;

	res.setRawBits(this->getRawBits() - fixed.getRawBits());
	return res;
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	res;

	res.setRawBits(((long) this->nb_float * (long) fixed.nb_float) >> this->nb_bits);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	res;

	res.setRawBits(((long) this->nb_float << this->nb_bits) / (long) fixed.nb_float);
	return (res);
}

Fixed	&Fixed::operator++()
{
	this->nb_float++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	prev(*this);
	this->nb_float++;
	return prev;
}

Fixed	&Fixed::operator--()
{
	this->nb_float--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	prev(*this);
	this->nb_float--;
	return prev;
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
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
}