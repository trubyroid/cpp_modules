#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
		std::string type;
	public:
		Weapon ();
		Weapon(std::string str);
		void setType(std::string str);
		std::string	&getType();
		~Weapon(); 
};

#endif