# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() 
{
        std::ifstream	file("data.csv");
		std::string 	line, date;
        double			rate;

        if (!file.is_open()) 
		{
            std::cerr << "data.csv: could not open file\n";
			return ;
        }
        std::getline(file, line);
        while (std::getline(file, line)) 
		{
            std::stringstream linestream(line);
            std::getline(linestream, date, ',');
            linestream >> rate;
            this->_priceData[date] = rate;
        }
        file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) 
{
    this->_priceData = copy._priceData;
}

BitcoinExchange::~BitcoinExchange() 
{
        
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy) 
{
	if (this != &copy) 
	{ 
		this->_priceData = copy._priceData;
	}
	return *this;
}

bool BitcoinExchange::isLeapYear(int year) 
{
	if (year % 4 != 0) {
		return false;
	} else if (year % 100 != 0) {
		return true;
	} else if (year % 400 != 0) {
		return false;
	}
	return true;
}

bool BitcoinExchange::isValidDate(const std::string& date) 
{
   if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
            return false;
        }

        int year, month, day;
        std::istringstream yearStream(date.substr(0, 4));
        std::istringstream monthStream(date.substr(5, 2));
        std::istringstream dayStream(date.substr(8, 2));

        if (!(yearStream >> year) || !(monthStream >> month) || !(dayStream >> day)) {
            return false;
        }

        if (year < 0 || year > 2024 || month < 1 || month > 12) {
            return false;
        }

        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isLeapYear(year)) {
            daysInMonth[1] = 29;
        }

        return day > 0 && day <= daysInMonth[month - 1];
    }

void BitcoinExchange::processInputFile(const std::string& inputFilename)
{
        std::ifstream inputFile(inputFilename);
        if (!inputFile.is_open()) {
            std::cerr << "Error: could not open input file." << std::endl;
            return;
        }

        std::string line, date, valueStr;
        double value;

        std::getline(inputFile, line);
        while (std::getline(inputFile, line)) 
		{
			if (line.find('|') == std::string::npos) {
                std::cout << "Error: bad input => " << line << '\n';
                continue;
            }
            std::stringstream linestream(line);
            std::getline(linestream, date, '|');
            std::getline(linestream, valueStr);

            date.erase(std::remove(date.begin(), date.end(), ' '), date.end());
            valueStr.erase(std::remove(valueStr.begin(), valueStr.end(), ' '), valueStr.end());

			if (!isValidDate(date)) {
                std::cout << "Error: invalid date => " << date << '\n';
                continue;
            }
            
            std::istringstream iss(valueStr);
            iss >> value;
			if (iss.fail() || !iss.eof()) {
    			std::cout << "Error: bad input " << '\n';
                continue; 
        	}
            
            if (value <= 0) {
                std::cout << "Error: not a positive number." << '\n';
                continue;
            }

            if (value > 1000) {
                std::cout << "Error: too large a number." << '\n';
                continue;
            }

            
            std::map<std::string, double>::iterator it = this->_priceData.upper_bound(date);
			if (it == this->_priceData.begin()) {
    			std::cerr << "Erreur : no data available" << std::endl;
    			continue;
}
            if (it != this->_priceData.begin() && (it == this->_priceData.end() || it->first != date)) {
                --it;
            }
			
            double result = value * it->second;
            std::cout << date << " => " << value << " = " << result << '\n';
        }
        inputFile.close();
    }
