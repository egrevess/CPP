#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>


template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack<T>(): std::stack<T>(){};
		MutantStack<T>(const MutantStack<T> &copy): std::stack<T>(copy){};
		~MutantStack<T>(){};
		MutantStack<T>	&operator=(const MutantStack &copy)
		{
			std::stack<T>::operator=(copy);
			return *this;
		}

		//Alias pour rendre plus lisible 
		typedef typename MutantStack<T>::stack::container_type::iterator				iterator;
		typedef typename MutantStack<T>::stack::container_type::const_iterator			const_iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator		reverse_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator begin()
		{
			return this->c.begin();
		}
		
		iterator end()
		{
			return this->c.end();
		}
		
		const_iterator begin() const
		{
			return this->c.begin();
		}
		
		const_iterator end() const
		{
			return this->c.end();
		}
		
		reverse_iterator rbegin()
		{
			return this->c.rbegin();
		}
		
		reverse_iterator rend()
		{
			return this->c.rend();
		}
		
		const_reverse_iterator rbegin() const
		{
			return this->c.rbegin();
		}
		
		const_reverse_iterator rend() const
		{
			return this->c.rend();
		}
};

#endif 