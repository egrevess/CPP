#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &copy) {
    this->_n = copy._n;
    this->_vector = copy._vector;
}

Span::~Span() {}

Span &Span::operator=(const Span &copy) {
    if (this != &copy) {
        this->_n = copy._n;
        this->_vector = copy._vector;
    }
    return *this;
}

void Span::addNumber(int number) {
    if (this->_vector.size() < this->_n) {
        this->_vector.push_back(number);
    } else {
        throw LimitReached();
    }
}

void	Span::addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	if (std::distance(begin, end) > static_cast<int>(this->_n - this->_vector.size())) {
        throw LimitReached();
    }
    this->_vector.insert(this->_vector.end(), begin, end);
}

std::vector<int>::const_iterator	Span::begin() const
{
	return this->_vector.begin();
}

std::vector<int>::const_iterator	Span::end() const
{
	return this->_vector.end();
}

unsigned int Span::shortestSpan() {
    if (this->_vector.size() < 2) {
        throw DistanceNotFound();
    }
    std::sort(this->_vector.begin(), this->_vector.end());
    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
	//valeur max des unsigned 
    for (size_t i = 0; i < this->_vector.size() - 1; ++i) {
        unsigned int span = static_cast<unsigned int>(this->_vector[i + 1] - this->_vector[i]);
        minSpan = std::min(minSpan, span);
    }
    return minSpan;
}

unsigned int Span::longestSpan() const {
    if (this->_vector.size() < 2) {
        throw DistanceNotFound();
    }
    int min = *std::min_element(this->_vector.begin(), this->_vector.end());
    int max = *std::max_element(this->_vector.begin(), this->_vector.end());
    return static_cast<unsigned int>(max - min);
}
