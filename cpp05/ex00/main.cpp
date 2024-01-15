#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat	a("Michel", 150);
		std::cout << a << std::endl;
		a.addGrade();
		std::cout << a << std::endl;
		a.delGrade();
		std::cout << a << std::endl;
		a.delGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception &e) // dès que le try ne marche pas il va récupérer l'exception dans et ecrire le messsage d'erreur de what 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "end Michel" << std::endl;
	try
	{
		Bureaucrat	b("Claude", 160);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "end Claude" << std::endl;
	try
	{
		Bureaucrat	c("Danny", -1);
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "end Danny" << std::endl;
	
	return 0;
}