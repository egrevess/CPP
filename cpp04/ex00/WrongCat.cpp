# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat is created" << std::endl;
}
WrongCat::WrongCat (const WrongCat &copy) : WrongAnimal(copy)
{
	this->_type = copy._type;
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destructed" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "I'm an WrongCat" << std::endl;
}
