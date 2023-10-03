# include "Cat.hpp"
# include "Animal.hpp"
# include "Brain.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat is created" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copy is created" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain ;
	std::cout << "Cat is destructed" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assignment operator called\n";
	this->_type = copy._type;
	*(this->_brain) = *(copy._brain);

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

std::string		Cat::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}