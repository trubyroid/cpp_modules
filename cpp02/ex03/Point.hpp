#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float X, const float Y) : x(X), y(Y) {}
		Point(const Point& copy);
		~Point();

		Point& operator =(const Point& obj);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif