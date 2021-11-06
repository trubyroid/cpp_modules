#include "Point.hpp"

bool bsp(const Point a,const Point b, const Point c,const Point point) {
    //сделать входные данные const
	float first;
    float second;
    float third;

    first = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
    second = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
    third = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
    if ((first > 0 && second > 0 && third > 0) || (first < 0 && second < 0 && third < 0))
        return true;
    else
        return false;
}