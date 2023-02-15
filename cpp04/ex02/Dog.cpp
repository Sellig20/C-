#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "------Default DOG Constructor called------" << std::endl;
	dog_brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &src)
{
	std::cout << "------Copy DOG Constructor called------" << std::endl;
	dog_brain = new Brain(*(src.dog_brain));
}

Dog::~Dog()
{
	std::cout << "------Default DOG Destructor called------" << std::endl;
	delete dog_brain;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}


