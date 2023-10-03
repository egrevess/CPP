#include "ScalarConverter.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter exactly one argument\n";
		return 1;
	}

	ScalarConverter::convert(av[1]);
}
