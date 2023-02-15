#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
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
	}
	std::cout << "-------------------------" << std::endl;
	{
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
	}
	std::cout << "-------------------------------" << std::endl;
	{
		Animal *array[10];
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				array[i] = new Dog();
			else
				array[i] = new Cat();
			array[i]->makeSound();
		}
		for (int j = 0; j < 10; j++)
			delete array[j];
	}
	std::cout << "---------------deep copy test----------------" << std::endl;
	{
		Dog basic;
		{
			Dog tmp =basic;
		}
	}


	return 0;
}
