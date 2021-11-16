#include "Brain.hpp"

Brain::Brain () {
	std::cout << "Brain constructor called.\n";
}

Brain::Brain(const Brain& copy) {
	std::cout << "Copy brain constructor called.\n";
}

Brain::~Brain() {
	std::cout << "Brain destructor called.\n";
}

Brain& Brain::operator = (const Brain& obj) {
	return *this;
}

void Brain::setIdea(std::string str, int i) {
	ideas[i] = str;
}

std::string Brain::getIdea (int i) {
	return (ideas[i]);
}

void Brain::setIdeas (std::string *array) {
	int i = 0;
	int j = 0;

	while (i != 100 && j != 100)
		ideas[i++] = array[j++];
}

std::string *Brain::getIdeas () {
	return (ideas);
}
