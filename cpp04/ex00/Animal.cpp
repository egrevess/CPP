# include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal is created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal is destructed" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "I'm an animal" << std::endl;
}
