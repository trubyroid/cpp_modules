#include "Brain.hpp"

Brain::Brain () {
	std::cout << "Brain constructor called.\n";
	for (int i = 0; i != 100; i++) {
		ideas[i++] = "EAT";
		ideas[i++] = "SLEEP";
		ideas[i++] = "GAME";
		ideas[i++] = "REPEAT";
		ideas[i] = "...";
	}
}

Brain::Brain(const Brain& copy) {
	std::cout << "Copy brain constructor called.\n";
}

Brain::~Brain() {
	std::cout << "Brain destructor called.\n";
}

Brain& Brain::operator = (const Brain& obj) {
	for (int i = 0; i != 100; i++)
		ideas[i] = obj.ideas[i];
	return *this;
}

std::string *Brain::getIdea (int indx) {
	if (indx == 0 || indx >= 100)
		return (&ideas[0]);
	return (&ideas[indx]);
}

void Brain::setIdea(std::string str, int indx) {
	ideas[indx] = str;
}