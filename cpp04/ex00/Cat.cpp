#include "Cat.hpp"

Cat::Cat () {
	std::cout << "Cat has been invited.\n";
	type = "Cat";
}

void Cat::makeSound () const {
	std::cout << "Cat says: MEEEEOOOOOOWW !!\n";
}

Cat::Cat(const Cat& copy) {
	std::cout << "Copy Cat construcor called.\n";
	this->operator=(copy);
}

Cat::~Cat () {
	std::cout << "Cat left the chat. ";
}

Cat& Cat::operator = (const Cat& obj) {
	type = obj.getType();
	return *this;
}