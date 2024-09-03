#include "Point.hpp"
#include <cstdio>

Fixed crossProduct(const Point& p1, const Point& p2, const Point& p) {
	return (p2.getX() - p1.getX()) * (p.getY() - p1.getY()) - (p2.getY() - p1.getY()) * (p.getX() - p1.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	//printf("aaa\n");
	Fixed cross1 = crossProduct(a, b, point);  // Edge a -> b
	Fixed cross2 = crossProduct(b, c, point);  // Edge b -> c
	Fixed cross3 = crossProduct(c, a, point);  // Edge c -> a

	// All cross products must have the same sign to be inside the triangle
	bool isInside = (cross1 > Fixed(0) && cross2 > Fixed(0) && cross3 > Fixed(0)) ||

	// If the point is exactly on one of the edges, return false (not inside)
	(cross1 < Fixed(0) && cross2 < Fixed(0) && cross3 < Fixed(0));

	// Check if the point is exactly on one of the edges (cross product == 0)
	bool isOnEdge = (cross1 == Fixed(0) || cross2 == Fixed(0) || cross3 == Fixed(0));

	return (isInside && !isOnEdge);
}

// bool sameSide(const Point& p1, const Point& p2, const Point& a, const Point& b) {
//     /* The expression `Fixed cp1 = (b.getX() - a.getX()) * (p1.getY() - a.getY()) - (b.getY() -
//     a.getY()) * (p1.getX() - a.getX());` is calculating the cross product between two vectors. */
//     Fixed cp1 = (b.getX() - a.getX()) * (p1.getY() - a.getY()) - (b.getY() - a.getY()) * (p1.getX() - a.getX());
//     Fixed cp2 = (b.getX() - a.getX()) * (p2.getY() - a.getY()) - (b.getY() - a.getY()) * (p2.getX() - a.getX());
//     /* The expression `return cp1 * cp2 >= Fixed(0);` is checking if the two cross products `cp1` and
//     `cp2` have the same sign or are equal to zero. */
//     return cp1 * cp2 >= Fixed(0);
// }

// bool bsp(Point const a, Point const b, Point const c, Point const point) {
//     /* The expression `return sameSide(point, a, b, c) && sameSide(point, b, a, c) && sameSide(point,
//     c, a, b);` is checking if a given point `point` is inside a triangle defined by three other
//     points `a`, `b`, and `c`. */
//     return sameSide(point, a, b, c) && sameSide(point, b, a, c) && sameSide(point, c, a, b);
// }