#ifndef ITER_HPP 
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T>
void	PrintValue(T& element)
{	
	std::cout << element << std::endl;
}

template <typename T>
void iter(T* array, size_t size, void (*func)(T& element))
{
	if (array == nullptr) {
        std::cerr << "Error: Array is null." << std::endl;
        return;
    }
	for (size_t i = 0; i < size; ++i) 
	{
        func(array[i]);
    }
}

template <typename T>
void iter(T* array, size_t size, void (*func)(const T& element))
{
	if (array == nullptr) {
        std::cerr << "Error: Array is null." << std::endl;
        return;
    }
	for (size_t i = 0; i < size; ++i) 
	{
        func(array[i]);
    }
}
// ne modifie pas les valeurs de array
// ne sert a rien de protéger func, vérifier l'existence d'une fonction à l'exécution en C++,
// car il s'agit d'un langage compilé et non interprété 
#endif