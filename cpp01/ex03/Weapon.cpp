#include "Weapon.hpp"

Weapon::Weapon () {
}

Weapon::~Weapon () {
}

Weapon::Weapon (std::string str) {
	this->type = str;
}

void Weapon::setType (std::string str) {
	this->type = str;
}

std::string	&Weapon::getType() {
	return (this->type);
}