#include "Zombie.hpp"

int	main() {
	Zombie *zombastik;
	int N = 100;

	zombastik = ZombieHorde(N, "Zombie №");
	for (int i = 0; i < N; i++)
		zombastik[i].announce();
}
