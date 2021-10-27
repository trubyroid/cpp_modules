#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
		std::string name;
	public:
		void setName (std::string name) {this->name = name;};
		void announce (void);
		~Zombie ();
};

Zombie	*ZombieHorde(int N, std::string name);

#endif