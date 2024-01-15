#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

class ScalarConverter
{
	private:
		static void	_toChar(std::string str);
		static void	_toInt(std::string str);
		static void	_toFloat(std::string str);
		static void	_toDouble(std::string str);

		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &copy);

	public:
		static void	convert(std::string str);
};

#endif