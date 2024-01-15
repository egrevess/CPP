#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>


int main() {
    // Création d'une instance de Data
    Data myData(42);

	std::cout << "data: " << &myData << std::endl;
    // Sérialisation de l'adresse de myData
    uintptr_t serialized = Serializer::serialize(&myData);
	std::cout << "data: " << serialized << std::endl;

    // Désérialisation pour obtenir un pointeur Data*
    Data* deserialized = Serializer::deserialize(serialized);
	std::cout << "data: " << deserialized << std::endl;

    // Vérification si les pointeurs sont identiques
    if (&myData == deserialized) {
        std::cout << "Serialization and deserialization successful." << std::endl;
    } else {
        std::cout << "Error in serialization/deserialization." << std::endl;
    }
	return 0;
}