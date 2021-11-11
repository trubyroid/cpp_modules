#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	protected:
		std::string name;
		unsigned int health;
		unsigned int energy;
		unsigned int damage;
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();
		ScavTrap& operator = (const ScavTrap& obj);
		void guardGate();
};

#endif