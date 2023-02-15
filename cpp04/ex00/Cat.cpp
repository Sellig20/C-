#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "------Default CAT Constructor called------" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &src)
{
	(void)src;
	std::cout << "------Copy CAT Constructor called------" << std::endl;
	// type = src.getType();
}

Cat::~Cat()
{
	std::cout << "------Default CAT Destructor called------" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}
