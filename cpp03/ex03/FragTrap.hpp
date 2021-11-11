#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	protected:
		std::string name;
		unsigned int health;
		unsigned int energy;
		unsigned int damage;
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap& copy);
		~FragTrap();
		FragTrap& operator = (const FragTrap& obj);
		void highFivesGuys();
};

#endif