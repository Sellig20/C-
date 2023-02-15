#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal &src);

		std::string getType() const;

		void makeSound() const;

	protected :
		std::string type;
};

#endif
