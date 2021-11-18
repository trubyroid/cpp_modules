#include "Wrong.hpp"

WrongAnimal::WrongAnimal () {
	std::cout << "Unknown WrongAnimal constructor called.\n";
	type = "unknown";
}

WrongAnimal::WrongAnimal (std::string str) {
	std::cout << "Name of new WrongAnimal - " << str << std::endl;
	type = str;
}

WrongAnimal::WrongAnimal (const WrongAnimal& copy) {
	type = copy.getType();
}

WrongAnimal::~WrongAnimal () {
	std::cout << "Unknown wrong animal destructor called.\n";
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& obj) {
	this->type = obj.getType();
	return *this;
}

std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::setType(std::string str) {
	type = str;
}

void WrongAnimal::makeSound () const {
	std::cout << "* READABLE NOISE *\n";
}

WrongCat::WrongCat () {
	std::cout << "WrongCat has been invited.\n";
	type = "WrongCat";
}

void WrongCat::makeSound () const {
	std::cout << "WrongCat says: WOV WOV WOV !!\n";
}

WrongCat::~WrongCat () {
	std::cout << "WrongCat left the chat. ";
}

