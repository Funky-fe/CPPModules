#include "Point.hpp"

Point::Point() : x(0), y(0) {
    //std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y) {
   // std::cout << "Parametric constructor called" << std::endl;
}

Point::Point(const Point& src) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Point&  Point::operator=(const Point& src) {
    // if (this != &src) | Apparently this is giving seg fault might be a skill issue
    //     *this = src;  | (aka infinite recursive because i am calling the operator= inside the operator=, not happening on fixed bc on fixed i just call a variable and not the class itself)
    if (this != &src) {
        const_cast<Fixed&>(this->x) = src.x;
        const_cast<Fixed&>(this->y) = src.y;
    }
   // std::cout << "Assignation operator called" << std::endl;
    return *this;
}

Point::~Point() {
   // std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
