#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal	&operator=(const Animal &copy);
		std::string getType() const;
		virtual void makeSound(void) const = 0;

};

#endif 