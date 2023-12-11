#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() 
{
	Animal *animal = new Animal();
	const Animal* dog = new Dog();
	std::cout << dog->getType() << " " << std::endl; 
    dog->makeSound();
	animal->makeSound();
	delete dog;
	delete animal;
	return 0; 
}
