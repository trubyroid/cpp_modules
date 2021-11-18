#include "Cat.hpp"

Cat::Cat () {
	std::cout << "Cat has been invited.\n";
	type = "Cat";
	mozg = new Brain();
}

void Cat::makeSound () const {
	std::cout << "Cat says: MEEEEOOOOOOWW !!\n";
}

Cat::Cat(const Cat& copy) {
	std::cout << "Copy Cat construcor called.\n";
	mozg = new Brain();
	this->operator=(copy);
}

Cat::~Cat () {
	std::cout << "Cat left the chat. ";
	delete mozg;
}

Cat& Cat::operator = (const Cat& obj) {
	type = obj.getType();
	*mozg = *obj.mozg;
	return *this;
}

Brain *Cat::getBrain() {
	return (mozg);
}