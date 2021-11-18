#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		~Brain();

		Brain& operator = (const Brain& obj);

		void setIdea(std::string str, int indx);
		std::string *getIdea(int indx);
};

#endif