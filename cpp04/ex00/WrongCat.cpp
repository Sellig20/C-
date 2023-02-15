#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "------Default WrongCAT Constructor called------" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
	(void)src;
	std::cout << "------Copy WrongCAT Constructor called------" << std::endl;
	// type = src.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "------Default WrongCAT Destructor called------" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong cat sound: COU COU" << std::endl;
}
