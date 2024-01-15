#include "Data.hpp"
#include <cstdlib>

Data::Data(int number)
{
	this->_number = number;
}

Data::Data(const Data &copy)
{
	*this = copy;
}

Data::~Data()
{
}

Data	&Data::operator=(const Data &copy)
{
	this->_number = copy._number;

	return *this;
}

int		Data::getNumber() const
{
	return this->_number;
}

std::ostream	&operator<<(std::ostream &out, const Data &data)
{
	out << "Number: " << data.getNumber() << std::endl;

	return out;
}
