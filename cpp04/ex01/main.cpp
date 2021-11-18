#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	int iterator = 30;
	const Animal* array[iterator];

	for (int i = 0; i != iterator; i++) {
		array[i++] = new Cat();
		array[i] = new Dog();
	}
	for (int i = 0; i != iterator; i++) {
		delete array[i];
	}
	Cat kotya;
	Dog sobanya;
	Brain *mozg;
	std::string *idea;
	int o = 77;

	mozg = sobanya.getBrain();
	mozg->setIdea("NEW IDEA!!", o);

	Dog new_sobanya(sobanya);
	
	mozg = new_sobanya.getBrain();
	idea = mozg->getIdea(o);
	std::cout << *idea << std::endl;
}