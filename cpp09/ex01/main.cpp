#include "RPN.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }

    RPN calculator;
    calculator.parseExpression(argv[1]);
    if (calculator.isError()) {
        std::cout << calculator.getErrorMessage() << std::endl;
        return 1;
    }
	
    std::cout << calculator.calculate() << std::endl;
    return 0;
}

