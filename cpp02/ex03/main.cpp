#include "Point.hpp"

int main() {
    Point a(7, 5);
    Point b(3, 3);
    Point c(5, 7);
    Point point(5, 5);

    std::cout << bsp(a, b, c, point) << std::endl;
}