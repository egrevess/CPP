#ifndef ARRAY_HPP 
# define ARRAY_HPP

# include <string>
# include <iostream>


template <typename T>
class Array
{
	private :
		unsigned int _size;
		T* _array;
;

	public :
		Array();
		Array(unsigned int n);
		Array(const Array<T> &copy);
		~Array();
		Array<T>	&operator=(const Array<T> &copy);

		unsigned int	size();
		void			GetValue(unsigned int index);
		void			PutValue(const T& value, unsigned int index);

		class IndexInvalid : public std::exception 
		{
    		public:
        		const char* what() const throw() //utilisation de throw car je gère moi même les exceptions
				{
            		return "Index invalid!"; // définition de what car je gère moi même le message d'erreur 
       			}
   		};

};

template<typename T>
Array<T>::Array() : _size(0), _array(NULL)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) 
{
    _array = new T[n];
}

template<typename T>
Array<T>::~Array(void) 
{
    delete[] _array;
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	this->_size = copy._size;
    _array = new T[copy._size];
    for (unsigned int i = 0; i < _size; i++) {
        this->_array[i] = copy._array[i];
    }
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy) 
{
    delete[] this->_array;
    this->_size = copy._size;
    this->_array = new T[copy._size];
    for (unsigned int i = 0; i < _size; i++) {
        this->_array[i] = copy._array[i];
    }
    return *this;
}

template<typename T>
unsigned int Array<T>::size()
{
	return this->_size;
}

template<typename T>
void Array<T>::GetValue(unsigned int index)
{
	try
	{
		if (index < _size) {
			std::cout << "Value at index " << index << ": " << _array[index] << std::endl;
		} 
		else 
		{
			throw IndexInvalid();
		}

	}
	catch (const IndexInvalid &e)
	{
		std::cout << e.what() << std::endl;
	}
}

template<typename T>
void	Array<T>::PutValue(const T& value, unsigned int index)
{
	if (index < this->_size && index >= 0)
		this->_array[index] = value;
}

#endif