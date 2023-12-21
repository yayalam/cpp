#include "RPN.hpp"

int main(int c, char **v)
{
    try {
        std::stack<int> myStack;
        if (c != 2)
        {
            std::cout << "Usage: ./RPN [expression]" << std::endl;
            return 0;
        }
        std::string data = v[1];
        for (size_t i=0;i<data.length();i++)
        {
            if (data[i] == ' ')
                continue;
            if (data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/')
            {
                if (myStack.size() < 2)
                {
                    std::cout << "Error: Not enough operands" << std::endl;
                    return 0;
                }
                RPNCalculator(myStack, data[i]);
            }
            else if (isdigit(data[i]))
                myStack.push(data[i] - '0');
            else
            {
                std::cout << "Error: Invalid input" << std::endl;
                return 0;
            }
        }
        if (myStack.size() != 1)
        {
            std::cout << "Error: Too many operands" << std::endl;
            return 0;
        }
        std::cout << myStack.top() << std::endl;
    }
    catch (std::exception &e)
    {
        (void)e;
        std::cout << "Error "<< std::endl;
    }
}