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
		Brain *getBrain();
};


#endif