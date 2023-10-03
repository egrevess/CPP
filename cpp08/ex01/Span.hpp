#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>
# include <algorithm> // Inclure l'en-tête pour std::min et std::max
# include <iterator> 


template <typename T>
class Span
{
	private :
		unsigned int		_n;
		std::vector<int>	_vector;
;
	public :
		Span();
		Span(unsigned int n);
		Span(const Span<T> &copy);
		~Span();
		Span<T>	&operator=(const Span<T> &copy);

		void			addNumber(int number);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class LimitReached : public std::exception 
		{
    		public:
        		const char* what() const throw() //utilisation de throw car je gère moi même les exceptions
				{
            		return "Vector is full!"; // définition de what car je gère moi même le message d'erreur 
       			}
   		};

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