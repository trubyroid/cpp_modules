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

		void setIdea(std::string str, int i);
		std::string getIdea(int i);
		void setIdeas(std::string *array);
		std::string *getIdeas();
};

#endif