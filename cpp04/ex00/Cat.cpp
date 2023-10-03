# include "Cat.hpp"
# include "Animal.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat is created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat is destructed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}
