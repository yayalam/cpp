#include "Phonebook.hpp"

std::string contact::getFirstName() const
{return FirstName;}
std::string contact::getLastName() const
{return LastName;}
std::string contact::getNickName() const
{return NickName;}
std::string contact::getPhoneNumber() const
{return PhoneNumber;}
std::string contact::getDarkestSecret() const
{return DarkestSecret;}

void contact::setFirstName(string name)
{FirstName = name;}
void contact::setLastName(string name)
{LastName = name;}
void contact::setNickName(string name)
{NickName = name;}
void contact::setPhoneNumber(string name)
{PhoneNumber = name;}
void contact::setDarkestSecret(string name)
{DarkestSecret = name;}