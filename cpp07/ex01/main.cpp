
# include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
	std::string stringArray[] = {"Coucou", "oups", "non"};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Appel de la fonction iter avec le tableau d'entiers et la fonction PrintValue
    iter(intArray, 5, PrintValue<const int>);

    // Appel de la fonction iter avec le tableau de doubles et la fonction PrintValue
    iter(doubleArray, 5, PrintValue<double>);

	iter(stringArray, 3, PrintValue<std::string>);
    return 0;
}
