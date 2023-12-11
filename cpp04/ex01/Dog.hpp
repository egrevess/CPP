#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal 
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog	&operator=(const Dog &copy);
		void	makeSound() const;
		void			addIdea(const std::string &idea);
		std::string		getIdea(unsigned int index) const;
};

#endif 