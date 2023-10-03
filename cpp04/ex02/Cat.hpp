#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string _type;
		Brain 	*_brain;

	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat	&operator=(const Cat &copy); // no comprendo 

		virtual void 	makeSound() const;
		void			addIdea(const std::string &idea);
		std::string		getIdea(int i) const;
};

#endif 