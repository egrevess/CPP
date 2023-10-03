# include "Dog.hpp"
# include "Animal.hpp"
# include "Brain.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copy is created" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain ;
	std::cout << "Dog is destructed" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	this->_type = copy._type;
	*(this->_brain) = *(copy._brain);

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

std::string	Dog::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

