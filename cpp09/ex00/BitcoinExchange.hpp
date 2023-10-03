#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <vector> // Inclure l'en-tête pour std::min et std::max
# include <iterator> 


template <typename T>
class BitcoinExchange
{
	private :
		unsigned int		_n;
		std::vector<int>	_vector;
;
	public :
		BitcoinExchange();
		BitcoinExchange(unsigned int n);
		BitcoinExchange(const BitcoinExchange<T> &copy);
		~BitcoinExchange();
		BitcoinExchange<T>	&operator=(const BitcoinExchange<T> &copy);

		class DistanceNotFound : public std::exception 
		{
    		public:
        		const char* what() const throw() //utilisation de throw car je gère moi même les exceptions
				{
            		return "Impossible to found a distance!"; // définition de what car je gère moi même le message d'erreur 
       			}
   		};

};

#endif