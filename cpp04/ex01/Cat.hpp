#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain *mozg;
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();

		Cat& operator = (const Cat& obj);

		void makeSound() const;
		void setIdeaToBrain(std::string str) const;
		std::string getIdeaFromBrain(int i) const;
};


#endif