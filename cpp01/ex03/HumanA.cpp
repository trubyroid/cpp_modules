#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &wpn) : gun(wpn) {
	this->name = name;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << gun.getType() << std::endl;
}

HumanA::~HumanA () {
    return;
}