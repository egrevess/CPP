#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
    // Création d'un Array d'entiers
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 2; // Remplissage avec des valeurs
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    // Création d'un Array de chaînes de caractères
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "!";
    for (unsigned int i = 0; i < stringArray.size(); ++i) {
        std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
    }

    // Test de l'opérateur de copie
    Array<int> copyArray = intArray;
    for (unsigned int i = 0; i < copyArray.size(); ++i) {
        std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
    }

    // Test de l'accès hors limites (doit lancer une exception)
   try {
    std::cout << "Test de l'accès hors limites: " << intArray[10] << std::endl;
	} catch (const Array<int>::OutOfRangeException& e) {
    std::cerr << "Exception capturée: " << e.what() << std::endl;
	}

    return 0;
}
