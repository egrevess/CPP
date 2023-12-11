# include "Dog.hpp"
# include "Animal.hpp"

Dog::Dog() : Animal()
{
	this->_type = "dog";
	this->_brain = new Brain();
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog (const Dog &copy) : Animal(copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog is destructed" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete this->_brain;
		this->_brain = new Brain(*copy._brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void	Dog::addIdea(const std::string &idea)
{
	this->_brain->addIdea(idea);
}

std::string	Dog::getIdea(unsigned int index) const
{
	return this->_brain->getIdea(index);
	
}