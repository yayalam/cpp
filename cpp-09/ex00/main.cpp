#include "BitcoinExchange.hpp"

int main(int c,char **v)
{
    if (c != 2)
    {
        std::cout << "usage: ./bitcoin [file]" << std::endl;
        return 0;
    }
    BitcoinExchange exchange("data.csv");
    exchange.startProgram(v[1]);
    return 0;
}