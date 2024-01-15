#ifndef SPAN_HPP
# define SPAN_HPP


#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <limits>

class Span {
private:
    unsigned int 		_n;
    std::vector<int> 	_vector;

public:
	Span();
    Span(unsigned int n);
    Span(const Span &copy);
    ~Span();
    Span &operator=(const Span &copy);

    void addNumber(int number);
    void	addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
    unsigned int shortestSpan() ;
    unsigned int longestSpan() const;
	std::vector<int>::const_iterator	begin() const;
	std::vector<int>::const_iterator	end() const;


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