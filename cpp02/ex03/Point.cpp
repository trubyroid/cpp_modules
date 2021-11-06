#include "Point.hpp"

Point::Point () : x(0), y(0) {
}

Point::Point(const float X, const float Y) : x(X), y(Y) {
}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {
}

Point& Point::operator=(const Point& obj) {
	return *this;
}

float Point::getX() const {
	return (this->x.toFloat());
}

float Point::getY() const {
	return(this->y.toFloat());
}

Point::~Point() {
}