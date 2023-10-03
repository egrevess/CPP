#include <iostream>
#include <string>
#include <sstream>

float ft_stof(const std::string& str) 
{
    std::istringstream iss(str);
    float result;
    if (!(iss >> result))
        throw std::invalid_argument("Impossible de convertir la chaîne en float");
    return result;
}
int ft_stoi(std::string str, int *check) 
{
    int result = 0;
    bool negative = false;
    int i = 0;

    if (str[i] == '-' || str[i] == '+') 
	{
		if (str[i] == '-')
        	negative = true;
        i++;
    }
	if (str[i] != '.')
	{
		for (; i < (int) str.length(); i++) 
		{
			if (str[i] >= '0' && str[i] <= '9') 
			{
				result = result * 10 + (str[i] - '0');
			} 
			else 
			{
				(*check) = 1;
				break ;
			}
		}
	}
	if ((*check) == 1 || str[i] == '.')
	{
		if (str[i] == '.')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (i + 1 == (int) str.length() && str[i] == 'f')
			(*check) = 0;
	}
    return negative ? -result : result;
}

void	convert(std::string input)
{
	try {
		int check = 0;
        int intValue = ft_stoi(input, &check);
        std::cout << "char: ";
        if (isprint(intValue) && check == 0)
            std::cout << intValue << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
		std::cout << "int: ";
		if (check == 0)
       		std::cout << intValue << std::endl;
		else 
			 std::cout << "Non displayable" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }

    try {
        float floatValue = ft_stof(input);
        std::cout << "float: " << floatValue << "f" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "float: impossible" << std::endl;
    }

    try {
        double doubleValue = std::stod(input);
        std::cout << "double: " << doubleValue << std::endl;
    } catch (const std::exception& e) {
        std::cout << "double: impossible" << std::endl;
    }
}