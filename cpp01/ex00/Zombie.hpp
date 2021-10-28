#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
		std::string name;
	public:
		Zombie (std::string);
		void announce (void);
		~Zombie ();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif