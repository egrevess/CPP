#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		int	_number;

	public:
		Data(int number);
		Data(const Data &copy);
		~Data();
		Data	&operator=(const Data &copy);
		
		int	getNumber() const;
};

std::ostream	&operator<<(std::ostream &out, const Data &data);
#endif