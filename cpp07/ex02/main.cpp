#include "Array.hpp"

int main() {
    // Test construction sans paramètres
    Array<int> arr1;
    std::cout << "Size of arr1: " << arr1.size() << std::endl;

    // Test construction avec un paramètre
    Array<double> arr2(5);
    std::cout << "Size of arr2: " << arr2.size() << std::endl;

    // Test accès et modification d'éléments
    for (unsigned int i = 0; i < arr2.size(); ++i) {
		arr2.PutValue(4,i);
        arr2.GetValue(i);
    }
	arr2.GetValue(7);

    // Test copie et affectation
    Array<double> arr3 = arr2;
    Array<double> arr4;
    arr4 = arr3;

    // Test taille après copie et affectation
    std::cout << "Size of arr3: " << arr3.size() << std::endl;
    std::cout << "Size of arr4: " << arr4.size() << std::endl;

    return 0;
}