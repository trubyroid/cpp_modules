#include "AMateria.hpp"

AMateria::AMateria () {
	type = "Unknown";
}

AMateria::AMateria (std::string const & type) {
	this->type = type;
}

AMateria::AMateria (const AMateria &copy) {
	this->operator=(copy);
}

AMateria::~AMateria () {}

AMateria &AMateria::operator=(const AMateria & obj) {
	this->type = obj.getType();
	return *this;
}

std::string const & AMateria::getType() const {
	return (type);
}

void AMateria::use(ICharacter& target) {
	std::cout << target.getName();	
}