#ifndef EASYFIND_HPP 
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <list>

class OccurrenceNotFound : public std::exception 
{
    public:
        const char* what() const throw() //utilisation de throw car je gère moi même les exceptions
		{
            return "Occurrence  not found!"; // définition de what car je gère moi même le message d'erreur 
       	}
};

template <typename T>
void	easyfind(T& container, int value)
{	
	typename T::iterator FoundIterator = std::find(container.begin(), container.end(), value);

	if (FoundIterator == container.end())
		throw OccurrenceNotFound();
	else 
		std::cout << "Occurence found : " << value << std::endl;
}

// On peut soit mettre T::iterator ou T::const_iterator mais avec la seconde on ne peut pas changer la valeur du it
// Dans l'exo la la valeur du FoundIterator 

#endif