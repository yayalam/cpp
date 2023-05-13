#include<iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "ENTER--->>(ADD,SEARCH,EXIT)" << std::endl;
    while(1)
    {
        std::getline(std::cin, input);
        if(input == "ADD"){
            std::cout << input << std::endl;
            while(1)
            {
             std::getline(std::cin, input);
            std::cout << input << std::endl;

            }
        }
        if(input == "SEARCH"){
            std::cout << input << std::endl;
            return(0);
        }
        if(input == "EXIT"){
            std::cout << input << std::endl;
            return(0);
        }
        else
            std::cout << "ENTER--->>(ADD,SEARCH,EXIT)" << std::endl;
    }
}