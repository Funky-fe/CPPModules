#include "Fixed.hpp"

Fixed::Fixed() : fixedNumber(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber) {
	//std::cout << "Int constructor called" << std::endl;
	fixedNumber = intNumber << fracBits; // multiplies the number by 8^2 (weird but thats how it works so later we divide it by 8^2 to display/use it)
	//std::cout << "Fixed value: " << fixedNumber << std::endl;
}

Fixed::Fixed(const float floatNumber) {
	//std::cout << "Float constructor called" << std::endl;
	fixedNumber = roundf(floatNumber * (1 << fracBits)); // we use this math equiation because bitwise operations doesnt work on float numbers
}

Fixed::Fixed(const Fixed& src) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixedNumber = src.fixedNumber;
	return *this;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

// Here we do the opposoite of when we turned the number into a fixed point, now here we are doing number / 8^2 
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

// Comparison operators 
bool	Fixed::operator>(const Fixed& src) const {
	return this->fixedNumber > src.fixedNumber;
}

bool	Fixed::operator<(const Fixed& src) const {
	return this->fixedNumber < src.fixedNumber;
}

bool	Fixed::operator>=(const Fixed& src) const {
	return this->fixedNumber >= src.fixedNumber;
}

bool	Fixed::operator<=(const Fixed& src) const {
	return this->fixedNumber <= src.fixedNumber;
}

bool	Fixed::operator==(const Fixed& src) const {
	return this->fixedNumber == src.fixedNumber;
}

bool	Fixed::operator!=(const Fixed& src) const {
	return this->fixedNumber != src.fixedNumber;
}

// Arithmetic operators 
Fixed	Fixed::operator+(const Fixed& src) const {
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(const Fixed& src) const {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(const Fixed& src) const {
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(const Fixed& src) const {
	if (src.toFloat() == 0) {
		std::cout << "Division by 0 detected! Default result: 0." << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / src.toFloat());
}

// Increment/Decrement

Fixed&	Fixed::operator++() {
	this->fixedNumber++;
	return *this;
}

//Here we just save and return the value before the increment because we will use that value on whatever we were using and only after that 
//the value will recieve the increment.
Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	
	operator++();
	return (tmp);
}

Fixed&	Fixed::operator--() {
	this->fixedNumber--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	
	//this->fixedNumber--;
	operator--();
	return (tmp);
}

Fixed&	Fixed::min(Fixed& first, Fixed& second) {
	return (first < second) ? first : second;
}

const Fixed&	Fixed::min(const Fixed& first,const Fixed& second) {
	return (first < second) ? first : second;
}

Fixed&	Fixed::max(Fixed& first, Fixed& second) {
	return (first > second) ? first : second;
}

const Fixed&	Fixed::max(const Fixed& first,const Fixed& second) {
	return (first > second) ? first : second;
}
