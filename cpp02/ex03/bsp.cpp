#include "Point.hpp"

bool bsp(Point a, Point b, Point c, Point point) {
    //сделать входные данные const
	float first;
    float secont;
    float third;

    first = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
    std::cout << first << std::endl;
    return true;
}