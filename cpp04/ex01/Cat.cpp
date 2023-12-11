# include "Cat.hpp"
# include "Animal.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat is created" << std::endl;
}
Cat::Cat (const Cat &copy) : Animal(copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat is destructed" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete this->_brain;
		this->_brain = new Brain(*copy._brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow" << std::endl;
}

void	Cat::addIdea(const std::string &idea)
{
	this->_brain->addIdea(idea);
}

std::string	Cat::getIdea(unsigned int index) const
{
	return this->_brain->getIdea(index);
	
}