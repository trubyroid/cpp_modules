#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->setIdeaToBrain("I can fly!\n");
	Animal k = *i;
	std::cout << k.getIdeaFromBrain(0);

	delete j;
	delete i;
}