#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

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
	cat.addIdea("This is so boring");
	Cat	copy(cat);
	cat.addIdea("This is sooooooooooooooooo boring");
	std::cout << std::endl;
	
	std::cout << cat.getIdea(0) << std::endl;
	std::cout << cat.getIdea(1) << std::endl;
	std::cout << copy.getIdea(0) << std::endl;
	std::cout << copy.getIdea(1) << std::endl;
	std::cout << std::endl;
	/*
	Cat catcat;
	catcat.addIdea("Idea 1 for cat");

	Cat copy(catcat); // Faire une copie profonde
	catcat.addIdea("New idea for cat"); // Ajouter une idée après la copie

	// Vérification
	std::cout << "Original Cat Idea at Index 1: " << catcat.getIdea(1) << std::endl;
	std::cout << "Copy Cat Idea at Index 1: " << copy.getIdea(1) << std::endl;
	*/
		
	return 0;
}