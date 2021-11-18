#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* iWrong = new WrongCat();
	iWrong->makeSound();
	metaWrong->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;
	delete iWrong;
	delete metaWrong;

}