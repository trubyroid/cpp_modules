#include "Zombie.hpp"

int	main() {
	Zombie *zombastik;

	zombastik = newZombie("Andrey");
	zombastik->announce();
	delete zombastik;
	randomChump("Roman");
	return (0);
}