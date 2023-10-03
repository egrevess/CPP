#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string _type;

	public:
		Cat();
		~Cat();

		virtual void makeSound() const;
};

#endif 