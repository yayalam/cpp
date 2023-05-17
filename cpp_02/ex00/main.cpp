#include "Fixed.hpp"


int main(){
    Fixed first;

    first.setRawBits(5);
    // Fixed second(first);
    Fixed third;

    // third.operator=(second);
    third = first;


    std::cout << first.getRawBits() << "\n";
    // std::cout << second.getRawBits() << "\n";
    std::cout << third.getRawBits() << "\n";
}