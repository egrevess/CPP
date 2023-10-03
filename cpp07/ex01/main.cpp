
# include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    int intSize = (int) sizeof(intArray) / (int) sizeof(intArray[0]);

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = (int) sizeof(doubleArray) / (int) sizeof(doubleArray[0]);

    // Appel de la fonction iter avec le tableau d'entiers et la fonction PrintValue
    iter(intArray, intSize, PrintValue<const int>);

    // Appel de la fonction iter avec le tableau de doubles et la fonction PrintValue
    iter(doubleArray, doubleSize, PrintValue<double>);

    return 0;
}
