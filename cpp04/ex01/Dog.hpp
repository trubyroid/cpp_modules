#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain *mozg;
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();

		Dog& operator = (const Dog& obj);

		void makeSound() const;
};


#endif