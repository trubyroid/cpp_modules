#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	protected:
        std::string name;
        unsigned int health;
        unsigned int energy;
        unsigned int damage;
    public:
        DiamondTrap();
        DiamondTrap(std::string str);
        DiamondTrap(const DiamondTrap& copy);
        ~DiamondTrap();

        DiamondTrap& operator = (const DiamondTrap& obj);

        void whoAmI();
        void attack(std::string const &target);
};


#endif