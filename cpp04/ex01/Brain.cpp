# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor is called" << std::endl;
	this->_index = 0;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called\n";
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}

Brain	&Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	this->_index = copy._index;

	return *this;
}

void	Brain::addIdea(const std::string &idea)
{
	this->_ideas[this->_index] = idea;
	this->_index++;
	if (this->_index == 100)
		this->_index = 0;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i <= 99)
		return (this->_ideas[i]);
	std::cout << "Wrong index" << std::endl;
	return NULL;
}
