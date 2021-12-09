#include "span.hpp"

int main()
{
    {
        std::cout << "Invalid size case:\n";
        try {span sn(-29);}
        catch (std::exception &ex) {
            std::cerr << ex.what();
        }

        std::cout << "\nSimple case:\n";
        span sp = span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.ShortestSpan() << std::endl;
        std::cout << sp.LongestSpan() << std::endl;

        std::cout << "\nFilled container case:\n";
        try {sp.addNumber(7);}
        catch (std::exception &ex) {
            std::cerr << ex.what();
        }
        sp.print();
    }
    {
        std::cout << "\n\nUncomparising container case:\n";
        span sp(1);
        sp.addNumber(0);
        try {std::cout << sp.ShortestSpan() << std::endl;}
        catch (std::exception &ex) {
            std::cerr << "Shortest: " << ex.what();
        }

        try {std::cout << sp.LongestSpan() << std::endl;}
        catch (std::exception &ex) {
            std::cerr << "Longest: " << ex.what();
        }
    }
    {
        std::cout << "\n\nBig container case:\n";
        span sp(10000);
        std::vector<int> vec(9997, 5);
        sp.FillSpan(vec.begin(), vec.end());
        sp.addNumber(9);
        std::cout << sp.LongestSpan() << std::endl;
        std::cout << sp.ShortestSpan() << std::endl;
    }

}