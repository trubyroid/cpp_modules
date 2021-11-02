#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
		std::string name;
		Weapon &gun;
	public:
		HumanA(std::string name, Weapon &wpn);
		void attack();
		~HumanA();
};

#endif