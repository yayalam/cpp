#include "Phonebook.hpp"

void PhoneBook::add(int i)
{
	std::string input = "\0";
	while (checkIfStringNull(input))
	{
    	std::cout <<"Please type your First name: ";
    	getline(std::cin,input);
    	if (std::cin.eof() || std::cin.fail())
    	{
        	std::clearerr(stdin);
        	std::cin.clear();
        	std::cout << std::endl;
    	}
	}
	contactBook[i].setFirstName(input);
	input = "\0";
	while (checkIfStringNull(input))
	{
    	std::cout <<"Please type your Last name: ";
    	getline(std::cin,input);
    	if (std::cin.eof() || std::cin.fail())
    	{
        	std::clearerr(stdin);
        	std::cin.clear();
        	std::cout << std::endl;
    	}
	}
	contactBook[i].setLastName(input);
	input = "\0";
	while (checkIfStringNull(input))
	{
    	std::cout <<"Please type your NickName: ";
    	getline(std::cin,input);
    	if (std::cin.eof() || std::cin.fail())
    	{
        	std::clearerr(stdin);
        	std::cin.clear();
        	std::cout << std::endl;
    	}
	}
	contactBook[i].setNickName(input);
	input = "\0";
	while (checkIfStringNull(input))
	{
    	std::cout <<"Please type your Phone Number: ";
    	getline(std::cin,input);
    	if (std::cin.eof() || std::cin.fail())
    	{
        	std::clearerr(stdin);
        	std::cin.clear();
        	std::cout << std::endl;
    	}
	}
	contactBook[i].setPhoneNumber(input);
	input = "\0";
	while (checkIfStringNull(input))
	{
    	std::cout <<"Please type your Darkest secret: ";
    	getline(std::cin,input);
    	if (std::cin.eof() || std::cin.fail())
    	{
        	std::clearerr(stdin);
        	std::cin.clear();
        	std::cout << std::endl;
    	}
	}
	contactBook[i].setDarkestSecret(input);
	input = "\0";
	if (size < 8) // remember to initialize size to 0 in main
		size++;
}

void PhoneBook::search()
{
	if (size == 0)
	{
		std::cout << "No person in my contact book\n";
		return;
	}
	for(int i=0;i<size;i++)
	{
		printLine(contactBook[i],i);
	}
	while (1)
	{
		std::string input;cout << "Choose index to Print: ";getline(std::cin,input);
		if (std::cin.eof() || std::cin.fail())
    	{
        	std::clearerr(stdin);
        	std::cin.clear();
        	std::cout << std::endl;
    	}
		if (isdigit(input[0]) == 0 || input.length() > 1 || (int)input[0]-48 >= size)
		{
			std::cout << "Please enter a valid Number\n";
			continue;
		}
		std::cout <<"FirstName is : "<<contactBook[(int)input[0]-48].getFirstName()<<std::endl;
		std::cout <<"LastName is : "<<contactBook[(int)input[0]-48].getLastName()<<std::endl;
		std::cout <<"NickName is : "<<contactBook[(int)input[0]-48].getNickName()<<std::endl;
		std::cout <<"Phone Number is : "<<contactBook[(int)input[0]-48].getPhoneNumber()<<std::endl;
		std::cout <<"Darkest Secret is : "<<contactBook[(int)input[0]-48].getDarkestSecret()<<std::endl;
		break;
	}
}

void PhoneBook::exitFun()
{
	cout << "kanchoufak fkisan";
	exit(0);
}