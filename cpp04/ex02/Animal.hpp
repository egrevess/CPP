#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	private:
		std::string _type;

	protected : //pas sûre que ce soit correct parce que tout marche toujours bien 
		Animal();

	public:
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound(void) const = 0;

};

#endif 