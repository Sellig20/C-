#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public :
		virtual ~Animal();
		Animal & operator=(const Animal &src);

		std::string getType() const;

		virtual void makeSound() const = 0;

	protected :
		std::string type;
};

#endif
