#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed () : fixedNumber(0) {
	std::cout << "Default constructor called" << std::endl;
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

int Fixed::getRawBits(void) {
	std::cout << "getRawBits function called" << std::endl;
	return this->fixedNumber;
}

void Fixed::setRawBits(int const raw) {
	this->fixedNumber = raw;
}