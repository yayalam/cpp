#ifndef FIXED_HPP 
#define FIXED_HPP


#include <iostream>
#include <cmath>


class Fixed{
    private:
        int value;
        static const int bits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const int Bit);
        Fixed(const float flo);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed(const Fixed &scoop);
        const Fixed &operator=(const Fixed &scoop);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream & operator << (std::ostream &out, const Fixed & Fixing);

#endif