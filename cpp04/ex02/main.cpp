#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
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
	std::cout << "---------------deep copy test----------------" << std::endl;
	// {
	// 	Animal wrongtest;
	// 	wrongtest = new Animal();
	// }
	return 0;
}
