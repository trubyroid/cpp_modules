#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string str);
		Animal(const Animal& copy);
		virtual ~Animal();

		Animal& operator = (const Animal& obj);

		std::string getType() const;
		void setType(std::string str);
		virtual void makeSound() const = 0;
};

#endif