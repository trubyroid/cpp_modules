#include "HumanB.hpp"

HumanB::HumanB (std::string name) {
	this->name = name;
}

HumanB::HumanB (std::string name, Weapon &wpn) {
	this->name = name;
	this->gun = &wpn;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->gun->getType() << std::endl;
}

HumanB::~HumanB () {
}
