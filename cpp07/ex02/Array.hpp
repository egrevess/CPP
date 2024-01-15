#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <stdexcept> // Pour std::out_of_range

template <typename T>
class Array {
private:
    unsigned int _size;
    T* _array;

public:
    Array() : _size(0), _array(nullptr) {}

    Array(unsigned int n) : _size(n) {
        if (n > 0) {
            this->_array = new T[n]();
        } else {
            this->_array = nullptr;
        }
    }

    Array(const Array<T>& copy) : _size(copy._size), _array(new T[copy._size]) {
        for (unsigned int i = 0; i < this->_size; ++i) {
            this->_array[i] = copy._array[i];
        }
    }

    ~Array() {
        delete[] this->_array;
    }

    Array<T>& operator=(const Array<T>& copy) {
        if (this != &copy) {
            delete[] this->_array;
            this->_size = copy._size;
            this->_array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; ++i) {
                this->_array[i] = copy._array[i];
            }
        }
        return *this;
    }

    T& operator[](unsigned int index) {
        if (index >= this->_size) throw Array::OutOfRangeException();;
        return this->_array[index];
    }

	class OutOfRangeException: public std::exception
		{
			public:
			const char	*what() const throw()
			{
				return "[OutOfRangeException]";
			}
		};

    unsigned int size() const {
        return this->_size;
    }
};

#endif
