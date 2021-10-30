#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &wpn) {
	this->name = name;
	this->gun = &wpn;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << gun->getType() << std::endl;
}

HumanA::~HumanA () {
    return;
}