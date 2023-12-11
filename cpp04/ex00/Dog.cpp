# include "Dog.hpp"
# include "Animal.hpp"

Dog::Dog() : Animal()
{
	this->_type = "dog";
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog (const Dog &copy) : Animal(copy)
{
	this->_type = copy._type;
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog is destructed" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}