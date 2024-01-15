#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
 
class BitcoinExchange
{
	private :
		std::map<std::string, double> _priceData;
;
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange	&operator=(const BitcoinExchange &copy);

		void	processInputFile(const std::string& inputFilename);
		bool	isLeapYear(int year);
		bool	isValidDate(const std::string& date);

};

#endif