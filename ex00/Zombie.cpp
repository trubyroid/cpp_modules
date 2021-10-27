#include "Zombie.hpp"

Zombie::Zombie (std::string str) {
	this->name = str;
}

void Zombie::announce (void) {
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie (void) {
	std::cout << "<" << this->name << "> " << "Finally I'm dead!" << std::endl;
}