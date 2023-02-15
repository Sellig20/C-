#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* savana = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	savana->makeSound();

	delete savana;
	delete j;
	delete i;

	std::cout << "-------------------------" << std::endl;

	const WrongAnimal* forest = new WrongAnimal();
	const Animal* Shima = new Dog();
	const WrongAnimal* Juana = new WrongCat();
	const WrongCat Adrien;

	std::cout << Shima->getType() << " " << std::endl;
	std::cout << Juana->getType() << " " << std::endl;

	Juana->makeSound(); //will output the cat sound!
	Shima->makeSound();
	forest->makeSound();
	Adrien.makeSound();

	delete forest;
	delete Shima;
	delete Juana;

	return 0;
}
