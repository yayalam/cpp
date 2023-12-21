#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>

class BitcoinExchange
{
private:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);

    std::map<std::string, double> data;

    double exchangeRate(std::string date);
    int checkDateIfValid(std::string date);
    int checkValueIfValid(double value);

public:
    ~BitcoinExchange();
    
    BitcoinExchange(std::string file);
    void startProgram(std::string file);
};
