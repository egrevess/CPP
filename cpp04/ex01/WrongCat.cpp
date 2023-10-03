# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat is created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destructed" << std::endl;
}


void	WrongCat::makeSound() const
{
	std::cout << "I'm an WrongCat" << std::endl;
}
