# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal is created" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal &copy)
{
	this->_type = copy._type;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is destructed" << std::endl;
}
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I'm an wronganimal" << std::endl;
}
