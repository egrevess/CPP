# include "Cat.hpp"
# include "Animal.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat is created" << std::endl;
}
Cat::Cat (const Cat &copy)
{
	this->_type = copy._type;
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat is destructed" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}
