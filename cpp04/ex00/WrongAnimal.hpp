#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	private:
		std::string _type;

	public:
		WrongAnimal();
		~WrongAnimal();

		std::string getType() const;
		virtual void makeSound(void) const;
};

#endif 