#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public :
		Animal();
		Animal(std::string name);
		Animal(const Animal &src);
		virtual ~Animal();
		Animal & operator=(const Animal &src);

		std::string getType() const;

		virtual void makeSound() const;

	protected :
		std::string type;
};

#endif
