#include "Cat.hpp"

Cat::Cat () {
	std::cout << "Cat has been invited.\n";
	type = "Cat";
}

void Cat::makeSound () const {
	std::cout << "MEEEEOOOOOOWW !!\n";
}

Cat::~Cat () {
	std::cout << "Cat left the chat.\n";
}