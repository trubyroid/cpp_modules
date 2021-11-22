#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dino("Godzilla"), gorilla("King-Kong");
	std::cout << std::endl;
	dino.attack(gorilla.getName());
	gorilla.takeDamage(dino.getDamage());
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	std::cout << std::endl;
	DiamondTrap monkey(gorilla);
	monkey.highFivesGuys();
	monkey.guardGate();
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	std::cout << std::endl;
}