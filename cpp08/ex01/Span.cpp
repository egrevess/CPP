# include "Span.hpp"

template<typename T>
Span<T>::Span() : _n(0)
{

}

template<typename T>
Span<T>::Span(unsigned int n) : _n(n)
{

}

template<typename T>
Span<T>::Span(const Span<T> &copy)
{
	this->_n = copy._n;
	this->_vector = copy._vector;
}

template<typename T>
Span<T>::~Span()
{

}

template<typename T>
Span<T>	&Span<T>::operator=(const Span<T> &copy)
{
	this->_n = copy._n;
	this->_vector = copy._vector;
	return (*this);
}

template<typename T>
void			Span<T>::addNumber(int number)
{
	if (this->_vector.size() != this->_n)
		this->_vector.push_back(number);
	else 
		throw LimitReached();
}

template<typename T>
unsigned int	Span<T>::shortestSpan()
{
	if (this->_vector.size() <= 1)
		throw DistanceNotFound();
	
	std::vector<int> sortedVector =this->_vector;
	sort(sortedVector.begin(), sortedVector.end());
	unsigned int shortestDistance = std::numeric_limits<unsigned int>::max();

	for (std::vector<int>::iterator it = sortedVector.begin(); it != sortedVector.end() - 1; it++) 
	{
        unsigned int distance = static_cast<unsigned int> (std::abs(static_cast<int> (*it) - static_cast<int> (*(it + 1)))); //valeur absolue (abs)
        shortestDistance = std::min(shortestDistance, distance);
    }
    return shortestDistance;

}

template<typename T>
unsigned int	Span<T>::longestSpan()
{
	if (this->_vector.size() <= 1)
		throw DistanceNotFound();
	
	std::vector<int>::iterator it_min = std::min_element(this->_vector.begin(), this->_vector.end());
    std::vector<int>::iterator it_max = std::max_element(this->_vector.begin(), this->_vector.end());
    unsigned int longestDistance = static_cast<unsigned int> (*it_max) - static_cast<unsigned int> (*it_min);
    return longestDistance;
}

