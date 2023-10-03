#include <iostream>
#include <string>

void	convert(std::string input);

int main(int argc, char** argv) {
    if (argc < 2) 
	{
        std::cout << "Pas assez d'arguments fournis." << std::endl;
        return 0;
    }

    std::string input = argv[1];
	convert(input);

    return 0;
}
