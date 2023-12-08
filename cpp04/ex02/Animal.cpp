# include "Animal.hpp"

# include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal is created" << std::endl;
}
Animal::Animal (const Animal &copy)
{
	this->_type = copy._type;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal is destructed" << std::endl;
}
Animal	&Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "I'm an animal" << std::endl;
}