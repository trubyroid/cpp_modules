#include "ClapTrap.hpp"

int main() {
	ClapTrap dino("Godzilla"), gorilla("King-Kong");
	ClapTrap unknown;
	std::cout << std::endl;
	dino.attack(gorilla.getName());
	gorilla.takeDamage(dino.getDamage());
	gorilla.attack(dino.getName());
	dino.takeDamage(gorilla.getDamage());
	std::cout << std::endl;
	ClapTrap monkey(gorilla);
	monkey.setDamage(5);
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	std::cout << std::endl;
	unknown = dino;
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	unknown.attack(gorilla.getName());
	gorilla.takeDamage(unknown.getDamage());
	std::cout << std::endl;
	monkey.attack(dino.getName());
	dino.takeDamage(monkey.getDamage());
	monkey.attack(unknown.getName());
	unknown.takeDamage(monkey.getDamage());
	std::cout << std::endl;
}