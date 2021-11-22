#include "MateriaSource.hpp"

MateriaSource::MateriaSource () {
	i = 0;
	while (i != 4)
		materias[i++] = NULL;
	i = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	this->operator=(copy);
}

MateriaSource::~MateriaSource () {
	for (int it = 0; it < 4; it++) {
		delete materias[it];
	}	
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
	for (int it = 0; it < 4; it++) {
		if (materias[it])
			delete materias[it];
		materias[it] = obj.materias[it]->clone();
	}
	this->i = obj.i;
	return *this;
}

void MateriaSource::learnMateria (AMateria* m) {
	if (i == 4)
		i = 0;
	if (materias[i] != NULL)
		delete materias[i];
	materias[i++] = m->clone();
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	for (int it = 0; it < 4; it++) {
		if (materias[it] && materias[it]->getType() == type)
			return (materias[it]->clone());
	}
	return (NULL);
}