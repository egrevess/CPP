#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private: 
		std::string	_ideas[100];
		int			_index;

	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain	&operator=(const Brain &copy);

		void		addIdea(const std::string &idea);
		std::string	getIdea(int i) const;


};

#endif 