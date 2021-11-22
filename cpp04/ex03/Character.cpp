#include "Character.hpp"

Character::Character () {
	name = "";
	this->i = 0;
	while (this->i != 4)
		materias[this->i++] = NULL;
	this->i = 0;
}

Character::Character (std::string name) {
	this->name = name;
	this->i = 0;
	while (this->i != 4)
		materias[this->i++] = NULL;
	this->i = 0;
}

Character::Character (const Character & copy) {
	this->operator=(copy);
}

Character::~Character () {
	for (int it = 0; it < 4; it++) {
		if (materias[it])
			delete materias[it];
	}
}

Character &Character::operator = (const Character &obj) {
	this->name = obj.getName();
	for (int it = 0; it < 4; it++) {
		if (materias[it])
			delete materias[it];
		materias[it] = obj.materias[it]->clone();
	}
	this->i = obj.i;
	return *this;
}

std::string const & Character::getName () const {
	return (name);
}

void Character::equip(AMateria* m) {
	if (this->i == 4)
		this->i = 0;
	if (materias[this->i] != NULL)
		delete materias[this->i];
	materias[this->i] = m->clone();
	this->i++;
}

void Character::unequip(int idx) {
	if (idx <= 0 || idx >= 4)
		return ;
	materias[idx] = NULL;
}
void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4)
		return ;
	if (materias[idx])
		materias[idx]->use(target);
}
