#ifndef WRONG_HPP
# define WRONG_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string str);
		WrongAnimal(const WrongAnimal& copy);
		virtual ~WrongAnimal();

		WrongAnimal& operator = (const WrongAnimal& obj);

		std::string getType() const;
		void setType(std::string str);
		void makeSound() const;
};

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
};

#endif