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

		//Comparison operators
		bool 			operator>(const Fixed& src) const;
		bool 			operator<(const Fixed& src) const;
		bool 			operator>=(const Fixed& src) const;
		bool 			operator<=(const Fixed& src) const;
		bool 			operator==(const Fixed& src) const;
		bool 			operator!=(const Fixed& src) const;

		//Arithmetic operators
		Fixed			operator+(const Fixed& src) const;
		Fixed			operator-(const Fixed& src) const;
		Fixed			operator*(const Fixed& src) const;
		Fixed			operator/(const Fixed& src) const;

		//Increment decrement operators
		Fixed&			operator++();
		Fixed			operator++(int);
		Fixed&			operator--();
		Fixed			operator--(int);

		//min and max
		static Fixed&	min(Fixed& first, Fixed& second);
		static const Fixed&	min(const Fixed& first, const Fixed& second);
		static Fixed&	max(Fixed& first, Fixed& second);
		static const Fixed&	max(const Fixed& first, const Fixed& second);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
#endif