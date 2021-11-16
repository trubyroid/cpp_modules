#include "Animal.hpp"

Animal::Animal () {
	std::cout << "Unknown animal constructor called.\n";
	type = "unknown";
}

Animal::Animal (std::string str) {
	std::cout << "Name of new animal - " << str << std::endl;
	type = str;
}

Animal::Animal (const Animal& copy) {
	type = copy.getType();
}

Animal::~Animal () {
	std::cout << "Unknown animal destructor called.\n";
}

Animal& Animal::operator = (const Animal& obj) {
	this->type = obj.getType();
	return *this;
}

std::string Animal::getType() const {
	return (type);
}

void Animal::setType(std::string str) {
	type = str;
}

void Animal::makeSound () const {
	std::cout << "Unknown animal says: * UNREADABLE NOISE *\n";
}

void Animal::setIdeaToBrain(std::string str) const {
	return ;
}

std::string Animal::getIdeaFromBrain(int i) const {
	return ("FUCK\n");
}