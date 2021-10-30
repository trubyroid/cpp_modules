#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
		std::string name;
		Weapon	*gun;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &wpn);
		void setWeapon(Weapon &wpn){this->gun = &wpn;};
		void attack();
		~HumanB();
};

#endif