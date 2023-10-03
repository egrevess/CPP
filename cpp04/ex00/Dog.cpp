# include "Dog.hpp"
# include "Animal.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog is created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is destructed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}