#include "Dog.hpp"

Dog::Dog () {
	std::cout << "Dog has been invited.\n";
	type = "Dog";
	mozg = new Brain();
}

void Dog::makeSound () const {
	std::cout << "Dog says: WOV WOV WOV !!\n";
}

Dog::Dog(const Dog& copy) {
	std::cout << "Copy Dog construcor called.\n";
	this->operator=(copy);
}

Dog::~Dog () {
	std::cout << "Dog left the chat. ";
	delete mozg;
}

Dog& Dog::operator = (const Dog& obj) {
	type = obj.getType();
	mozg->setIdeas(obj.mozg->getIdeas());
	return *this;
}