#include "Fixed.hpp"
#include "Point.hpp"
#include <cstdio>

extern bool bsp(Point const a, Point const b, Point const c, Point const point);

// int main() {
//     Point a(-5.0f, -50.0f);
//     Point b(-51.0f, -50.0f);
//     Point c(-50.5f, -51.0f);

//     Point inside(0.5f, 0.5f);
//     Point outside(2.0f, 2.0f);
//     Point onEdge(0.5f, 0.0f);
//     Point point(0.3f, 0.3f);

//     std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
//     std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
//     std::cout << "On Edge: " << bsp(a, b, c, onEdge) << std::endl;
//     std::cout << "Point: " << bsp(a, b, c, point) << std::endl;

//     return 0;
// }

int main() {
    // Define the points of the triangle
    Point a(-5.0f, -50.0f);
    Point b(-51.0f, -50.0f);
    Point c(-50.5f, -51.0f);

    // Define points to test
    Point inside(-40.0f, -50.5f);
    Point outside(-60.0f, -60.0f);
    Point onEdge(-50.75f, -50.5f);
    Point point(-49.0f, -50.8f);

    // Testing points
    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "On Edge: " << bsp(a, b, c, onEdge) << std::endl;
    std::cout << "Point: " << bsp(a, b, c, point) << std::endl;

    return 0;
}