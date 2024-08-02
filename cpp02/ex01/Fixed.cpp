#include "Fixed.hpp"

Fixed::Fixed () : fixedNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int intNumber) {
	std::cout << "Int constructor called" << std::endl;
	*this.fixedNumber = intNumber;
}

Fixed::Fixed (const float floatNumber) {
	std::cout << "Float constructor called" << std::endl;
	fixedNumber = floatNumber;
}

Fixed::Fixed (const Fixed& src) {
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