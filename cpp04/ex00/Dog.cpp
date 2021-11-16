#include "Dog.hpp"

Dog::Dog () {
	std::cout << "Dog has been invited.\n";
	type = "Dog";
}

void Dog::makeSound () const {
	std::cout << "WOV WOV WOV !!\n";
}

Dog::~Dog () {
	std::cout << "Dog left the chat.\n";
}