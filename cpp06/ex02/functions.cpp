#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

Base *generate() {
    time_t		now = time(0);
    struct tm	tstruct;
    char		buf[80];

    tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%X", &tstruct);
    if ((int)buf[16] % 3 == 0)
        return (new A);
    else if ((int)buf[16] % 2)
        return (new B);
    else
        return (new C);
}

void identify(Base *p) {
    if (p == NULL) {
        std::cerr << "Error: NULL\n";
        return ;
    }
    if (dynamic_cast<A*>(p))
        std::cout << "Type: A\n";    
    if (dynamic_cast<B*>(p))
        std::cout << "Type: B\n";
    if (dynamic_cast<C*>(p))
        std::cout << "Type: C\n";
}

void identify(Base &p) {
    if (dynamic_cast<A*>(&p))
        std::cout << "Type: A\n";    
    else if (dynamic_cast<B*>(&p))
        std::cout << "Type: B\n";
    else if (dynamic_cast<C*>(&p))
        std::cout << "Type: C\n";
    else {
        std::cerr << "Error: type is undefined\n";
        return ;
    }
}