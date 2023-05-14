#include "Phonebook.hpp"


int PhoneBook::checkIfStringNull(std::string tmp)
{
    if (tmp == "\0")
            return (1);
    return (0);
}

void PhoneBook::printLine(contact tmp,int i)
{
	std::cout << i << "         |";
	
	if (tmp.getFirstName().length() >= 10)
		cout << tmp.getFirstName().substr(0, 9) << ".|";
	else
    	cout << tmp.getFirstName() << std::string(10 - tmp.getFirstName().length(), ' ') << "|";
	
	if (tmp.getLastName().length() >= 10)
		cout << tmp.getLastName().substr(0, 9) << ".|";
	else
    	cout << tmp.getLastName() << std::string(10 - tmp.getLastName().length(), ' ') << "|";
	
	
	if (tmp.getNickName().length() >= 10)
		cout << tmp.getNickName().substr(0, 9) << ".|";
	else
    	cout << tmp.getNickName() << std::string(10 - tmp.getNickName().length(), ' ') << "|";
	
	std::cout << std::endl;
}

void PhoneBook::setSize(int k)
{
    size = k;
}
