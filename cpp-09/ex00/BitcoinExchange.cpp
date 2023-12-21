#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    this->data = other.data;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        this->data = other.data;
    return *this;
}

int checkMydateFormat(std::string date)
{
    for (size_t i=0;i<date.length();i++)
    {
        if ((i == 4 || i == 7) && date[i] != '-')
            return 0;
        else if (!isdigit(date[i]) && i != 4 && i != 7)
            return 0;
    }
    return 1;
}

BitcoinExchange::BitcoinExchange(std::string file)
{
    std::string singleLine;
    std::ifstream inputFile(file.c_str());
    if (!inputFile)
	{
		std::cout << "Error: openning file data.csv" << std::endl;
		return ;
	}
    std::getline(inputFile, singleLine); // skip first line (header)
    while (std::getline(inputFile, singleLine))
    {
        if(inputFile.fail())
	    {
		    std::cout << "Error: reading from the file data.csv" << std::endl;
		    return ;
	    }
        size_t pos = singleLine.find(',');
        if (pos == std::string::npos)
        {
            std::cout << "Error: Invalid line => " << singleLine << std::endl;
            continue;
        }
        std::string date = singleLine.substr(0, pos);
        std::string valueStr = singleLine.substr(pos + 1);
        std::istringstream ss(valueStr);
        if (!checkMydateFormat(date))
        {
            std::cout << "Error: Invalid line => " << singleLine << std::endl;
            continue;
        }
        if (!checkDateIfValid(date))
            continue;
        double value;
        if (!(ss >> value)) // convert string to double
        {
            std::cout << "Error: Invalid line => " << singleLine << std::endl;
            continue;
        }
        data[date] = value;
    }
}

double BitcoinExchange::exchangeRate(std::string date)
{
    std::map<std::string, double>::iterator it = this->data.lower_bound(date);

    if (it != data.begin() && it->first != date)
        it--;
    
    if (data.empty() || it == data.end())
    {
        std::cout << "Error: No rate for that date => " << date << std::endl;
        return -1.0;
    }

    return it->second;
}

int BitcoinExchange::checkDateIfValid(std::string date)
{
    size_t pos1 = date.find('-');
    size_t pos2 = date.rfind('-');

    if (pos1 == std::string::npos || pos1 == pos2)
        return 0;
    if (!checkMydateFormat(date))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
    std::string yearString = date.substr(0, pos1);
    std::string monthString = date.substr(pos1 + 1, 2);
    std::string dayString = date.substr(pos2 + 1);

    int year, month, day;
    std::istringstream yearStream(yearString), monthStream(monthString), dayStream(dayString);

    if (!(yearStream >> year) || !(monthStream >> month) || !(dayStream >> day))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }

    // Check for 30 days months
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }

    // Check for February
    if (month == 2)
    {
        if (day > 29)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return 0;
        }
        if (day == 29 && !(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return 0;
        }
    }
    return 1;
}

int BitcoinExchange::checkValueIfValid(double value)
{
    if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 0;
    }
    if (value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 0;
    }
    return 1; 
}

void BitcoinExchange::startProgram(std::string file)
{
    std::string singleLine;
    std::ifstream inputFile(file.c_str());
    if (!inputFile)
	{
		std::cout << "Error: openning file " << file << std::endl;
		return ;
	}
    std::getline(inputFile, singleLine); // skip first line (header)
    if (inputFile.fail())
	{
		std::cout << "Error: reading the file " << file << std::endl;
		return ;
	}
    while(std::getline(inputFile, singleLine))
    {
        if (inputFile.fail())
	    {
    		std::cout << "Error: reading the file " << file << std::endl;
		    return ;
	    }
        std::istringstream ss(singleLine);
        std::string date;
        double value;
        char delim;

        if (!(ss >> date >> delim >> value))
        {
            std::cout << "Error: bad input => " << singleLine << std::endl;
            continue;
        }

        if (delim != '|')
        {
            std::cout << "Error: bad input => " << singleLine << std::endl;
            continue;
        }

        if (!checkDateIfValid(date))
            continue;

        if (!checkValueIfValid(value))
            continue;

        double rate = exchangeRate(date);
        if (rate == -1.0)
            continue;

        std::cout << date << " => " << value << " = " << value * rate << std::endl;
    }
}

