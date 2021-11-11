#include "ScavTrap.hpp"
# define MAX_ENERGY 50
# define MAX_HEALTH 100
# define DEFAULT_DAMAGE 20

ScavTrap::ScavTrap () : ClapTrap() {
	std::cout << "Unknown ScavTrap appeared on the battlefield, but he's too weak to participate the battle!\n";
	name = "Unknown Scav";
	health = 1;
	energy = 0;
	damage = 0;
}

ScavTrap::ScavTrap (std::string str) : ClapTrap(str) {
	std::cout << "ScavTrap " << str << " appeared on the battlefield!\n";
	this->name = str;
	this->health = MAX_HEALTH;
	this->energy = MAX_ENERGY;
	this->damage = DEFAULT_DAMAGE;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
	std::cout << "ScavTrap " << copy.name << " invited his brother!\n";
	name = "Brother of " + copy.name;
	health = copy.health;
	energy = copy.energy;
	damage = copy.damage;
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap " << name << " leave the battlefield.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj) {
	std::cout << "ScavTrap " << name << " steal the specifications from ScavTrap " << obj.name << "!\n";
	health = obj.health;
	energy = obj.energy;
	damage = obj.damage;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "From now on ScavTrap " << name << " in Gate keeper mode.\n";
}
