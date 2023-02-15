#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "------Default CAT Constructor called------" << std::endl;
	cat_brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat &src)
{
	(void)src;
	std::cout << "------Copy CAT Constructor called------" << std::endl;
	cat_brain = new Brain(*(src.cat_brain));
}

Cat::~Cat()
{
	std::cout << "------Default CAT Destructor called------" << std::endl;
	delete cat_brain;
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}
