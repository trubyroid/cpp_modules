#include <iostream>

void exception(std::string string) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << string << "f" << std::endl;
    std::cout << "double: " << string << std::endl;
}

void printChar(unsigned char c) {
    std::cout << "char: ";
    if (c < 32 || c > 126)
        std::cout << "Can't display\n";
    else
        std::cout << "'" << c << "'\n";
}

void printInt(int i) {
    std::cout << "int: " << i << std::endl;
}
void printFloat(float f) {
    std::cout << "float: ";
    if (f - (int)f == 0)
        std::cout << f << ".0f\n";
    else
        std::cout << f << "f" << std::endl;
}

void printDouble(double d) {
    std::cout << "double: ";
    if (d - (int)d == 0)
        std::cout << d << ".0\n";
    else
        std::cout << d << "f" << std::endl;
}


int printAll(double result) {
    printChar(static_cast<unsigned char>(result));
    printInt(static_cast<int>(result));
    printFloat(static_cast<float>(result));
    printDouble(result);
    return (0);
}
