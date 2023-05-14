#include <iostream>

int main(){

    std::string subject = "HI THIS IS BRAIN";

    std::string *stringPTR = &subject;
    std::string& stringREF = subject;

    std::cout << &subject << "<-- subject adress\n" << stringPTR << "<-- adress held by stringPTR of the subject var\n" << &stringREF << "<-- reference of subject var heled\n";
    std::cout << subject << "<-- value subject adress\n" << *stringPTR << "<-- value of adress held by stringPTR of the subject var\n" << stringREF << "<-- value of reference of subject var heled\n";
}