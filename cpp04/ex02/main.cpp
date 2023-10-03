#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{
	Animal	*animals[4];

	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << std::endl;

	Cat	cat;
	cat.addIdea("coucou");
	Cat	copy(cat);
	cat.addIdea("coucou 2");
	std::cout << std::endl;
	
	std::cout << cat.getIdea(0) << std::endl;
	std::cout << cat.getIdea(1) << std::endl;
	std::cout << copy.getIdea(0) << std::endl;
	std::cout << copy.getIdea(1) << std::endl;
	
	return 0;
} 
