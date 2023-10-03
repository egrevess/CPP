#ifndef MIN_HPP  
# define MIN_HPP

# include <string>
# include <iostream>

// Déclaration de la fonction template
template <typename T>
T min(T& par1, T& par2)
{
	if (par1 >= par2)
		return par2;
	else 
		return par1;
}

#endif