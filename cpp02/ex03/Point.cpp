#include "Point.hpp"

Point& Point::operator=(const Point& obj) {
	Point new_point(obj.x.getRawBits(), obj.y.getRawBits());
	return new_point;
}


float Point::getX() const {
	return (this->x.toFloat());
}

float Point::getY() const {
	return(this->y.toFloat());
}

Point::~Point() {
}