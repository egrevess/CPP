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
void iter(T* array, int size, void (*func)(T& element))
{
	for (int i = 0; i < size; ++i) 
	{
        func(array[i]);
    }
}

template <typename T>
void iter(T* array, int size, void (*func)(const T& element))
{
	for (int i = 0; i < size; ++i) 
	{
        func(array[i]);
    }
}
#endif