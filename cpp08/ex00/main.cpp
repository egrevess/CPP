#include "easyfind.hpp"

int main() 
{
	std::cout << "Vector : " << std::endl;
    std::vector<int> numbers;// = {10, 20, 30, 40, 50};
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
	//numbers.push_back(60);
    int searchValue = 60;

    try {
        easyfind(numbers, searchValue);
    } catch (const OccurrenceNotFound& e) {
        std::cout << e.what() << std::endl;
    }

	std::cout << "List : " << std::endl;
	std::list<int> numbers_l;
    numbers_l.push_back(10);
    numbers_l.push_back(20);
    numbers_l.push_back(30);
    numbers_l.push_back(40);
    numbers_l.push_back(50);

    int searchValue_l = 30;

    try {
        easyfind(numbers_l, searchValue_l);
    } catch (const OccurrenceNotFound& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}