#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>  // For roundf function

class Fixed
{
	private:
		int fixedNumber;
		static const int fracBits = 8;

	public:
		Fixed();
		Fixed(const int intNumber);
		Fixed(const float floatNumber);
		Fixed(const Fixed& src);
		~Fixed();
		Fixed& 	operator=(const Fixed& src);
		float 	toFloat(void) const;
		int		toInt(void) const; 
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif