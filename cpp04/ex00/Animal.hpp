#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	private:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &copy);
		~Animal();

		Animal	&operator=(const Animal &copy);
		std::string getType() const;
		virtual void makeSound(void) const;

};

#endif 