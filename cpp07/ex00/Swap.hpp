#ifndef SWAP_HPP 
# define SWAP_HPP

# include <string>
# include <iostream>

template <typename T>
void swap(T& par1, T& par2)
{
	T temp = par1;
	par1 = par2;
	par2 = temp;
}

#endif