#include <iostream>
#include "Fixed.hpp"

int main(void) {
    
    Fixed   a;
    Fixed   const b (10);
    Fixed   const c (42.42f);
    Fixed   const d (b);

    a = Fixed (1234.4321f);

    // Here it will use my custom << operator that I created since the default << operator doesn't know how to print my Fixed variable
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    // Here since its printing a intiger and the default << operator can handle it by default, it will not use my custom function
    std::cout << "a is " << a.toInt() << " as intiger" << std::endl;
    std::cout << "b is " << b.toInt() << " as intiger" << std::endl;
    std::cout << "c is " << c.toInt() << " as intiger" << std::endl;
    std::cout << "d is " << d.toInt() << " as intiger" << std::endl;

    return 0;
}