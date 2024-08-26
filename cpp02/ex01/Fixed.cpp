#include "Fixed.hpp"

Fixed::Fixed() : fixedNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber) {
	std::cout << "Int constructor called" << std::endl;
	fixedNumber = intNumber << fracBits; // multiplies the number by 8^2 (weird but thats how it works so later we divide it by 8^2 to display/use it)
	std::cout << "Fixed value: " << fixedNumber << std::endl;
}

Fixed::Fixed(const float floatNumber) {
	std::cout << "Float constructor called" << std::endl;
	fixedNumber = roundf(floatNumber * (1 << fracBits)); // we use this math equiation because bitwise operations doesnt work on float numbers
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixedNumber = src.fixedNumber;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//Here we do the opposoite of when we turned the number into a fixed point, now here we are doing number / 8^2 
float Fixed::toFloat(void) const {
	return (float)fixedNumber / (1 << fracBits);
}

// Here we just reverse the bits so we remove the fractional part
int	Fixed::toInt(void) const {
	return fixedNumber >> fracBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}
