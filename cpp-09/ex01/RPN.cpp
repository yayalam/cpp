#include "RPN.hpp"

void RPNCalculator(std::stack<int> &myStack, char operat)
{
    int top = myStack.top();
    myStack.pop();
    int secondTop = myStack.top();
    myStack.pop();

    if (operat == '+')
        myStack.push(secondTop + top);
    else if (operat == '-')
        myStack.push(secondTop - top);
    else if (operat == '*')
        myStack.push(secondTop * top);
    else if (operat == '/')
    {
        if (top == 0)
        {
            std::cout << "Error: Division by zero" << std::endl;
            throw std::exception();
        }
        myStack.push(secondTop / top);
    }
}