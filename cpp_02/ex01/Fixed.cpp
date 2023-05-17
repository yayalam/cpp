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

Fixed::Fixed(const int Bit)
{
    std::cout << "Int constructor called" << std::endl;
    value = Bit << bits;
}

int Fixed::toInt(void) const
{
    return (value >> this->bits);
}

Fixed::Fixed(const float Num)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(Num * (1 << bits));
}

float Fixed::toFloat( void ) const
{
    return ((float)value / (1 << bits));
}

std::ostream & operator << (std::ostream &out, const Fixed & Fixing)
{
    out << Fixing.toFloat();
    return (out);
}