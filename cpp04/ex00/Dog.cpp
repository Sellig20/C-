#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "------Default DOG Constructor called------" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &src)
{
	(void)src;
	std::cout << "------Copy DOG Constructor called------" << std::endl;
	// type = src.getType();
}

Dog::~Dog()
{
	std::cout << "------Default DOG Destructor called------" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}

