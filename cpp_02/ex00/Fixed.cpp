#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "FIXED CONSTRUCTED\n";

}
Fixed::~Fixed(){
    std::cout << "FIXED DECONSTRUCTED\n";

}
Fixed::Fixed(const Fixed &scoop){
    if(this == &scoop)
        return ;
    *this = scoop;
    std::cout << "copy constructer called\n";
}

const Fixed &Fixed::operator=(const Fixed &scoop){
    this->value = scoop.value;
    std::cout << "copy ====\n";
    return *this;
}


int Fixed::getRawBits( void ) const{
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}
