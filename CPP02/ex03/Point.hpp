#include "Fixed.hpp"

class Point {
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &src);
        Point &operator=(const Point &src);

        ~Point();

        Fixed getX() const;
        Fixed getY() const;

    private:
        Fixed const x;
        Fixed const y;
};