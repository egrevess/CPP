#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{ 
	private:
		std::string _type;

	public:
		WrongCat();
		~WrongCat();

		virtual void makeSound(void) const;
};

#endif 