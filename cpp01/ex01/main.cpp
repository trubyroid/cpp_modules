#include "Zombie.hpp"

int	main() {
	Zombie *zombies;
	int N = 100;

	zombies = ZombieHorde(N, "Zombie №");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
}
