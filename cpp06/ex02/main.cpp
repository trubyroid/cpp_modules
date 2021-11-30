#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate();
void identify(Base *p);
void identify(Base &p);

int main () {
    Base *example;
    Base *exampleNULL = NULL;
    A   a;
    B   b;
    C   c;

    example = generate();
    identify(example);
    identify(*example);
    identify(a);
    identify(&a);
    identify(b);
    identify(&b);
    identify(c);
    identify(&c);
    identify(exampleNULL);
    identify(*exampleNULL);
}