#include "Phonebook.hpp"
int main()
{
    PhoneBook myPhoneBook;
    int i=0;
    myPhoneBook.setSize(0);
    while(1)
    {
        string input;cout << "Please type a CMD: ADD SEARCH EXIT: ";
        getline(std::cin, input);
        if (std::cin.eof() || std::cin.fail())
        {
            std::clearerr(stdin);
            std::cin.clear();
            std::cout << std::endl;
        }
        if (input == "ADD")
        {
            myPhoneBook.add(i);
            i++;
            if (i == 8)
                i=0;
        }
        else if (input == "SEARCH")
            myPhoneBook.search();
        else if (input == "EXIT")
            myPhoneBook.exitFun();
        else
            continue;
    }
}