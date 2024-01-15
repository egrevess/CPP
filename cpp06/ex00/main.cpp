
#include "ScalarConverter.hpp"
#include <iostream>

int main(int ac, char **av) {
    
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cout << "Wrong number of arguments" << std::endl;
    return 0;
}
