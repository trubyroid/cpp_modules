#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
		Fixed const x;
		Fixed const y;
	public:
		Point() : x(0), y(0) {}
		Point(const float X, const float Y) : x(X), y(Y) {}
		Point(const Point& copy) : x(copy.x), y(copy.y) {}
		~Point();

		Point& operator =(const Point& obj);

		float getX(void) const;
		float getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif