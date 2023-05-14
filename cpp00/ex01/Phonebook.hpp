#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<iostream>
#include <cctype>

using namespace std;

class contact{

private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    void setFirstName(string name);
    void setLastName(string name);
    void setNickName(string name);
    void setPhoneNumber(string name);
    void setDarkestSecret(string name);

};

class PhoneBook{
private:
    contact contactBook[8];
	int size;
public:
	int checkIfStringNull(std::string tmp);
	void printLine(contact tmp,int i);
	void setSize(int k);
	void add(int i);
	void search();
	void exitFun();
};

#endif