#include "Ice.hpp"

Ice::Ice () {
	type = "ice";
}

Ice::Ice (const Ice & copy) {
	this->operator=(copy);
}

Ice::~Ice () {}

Ice &Ice::operator=(const Ice & obj) {
	this->type = obj.type;
	return *this;
}

AMateria *Ice::clone () const {
	return (new Ice(*this));
}

void Ice::use (ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}