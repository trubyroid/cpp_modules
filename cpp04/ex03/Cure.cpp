#include "Cure.hpp"

Cure::Cure () {
	type = "cure";
}

Cure::Cure (const Cure & copy) {
	this->operator=(copy);
}

Cure::~Cure () {}

Cure &Cure::operator=(const Cure & obj) {
	this->type = obj.type;
	return *this;
}


AMateria *Cure::clone () const {
	return (new Cure(*this));
}

void Cure::use (ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}