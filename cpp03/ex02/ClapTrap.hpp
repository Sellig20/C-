#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
	public :
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const &src); //constructeur de recopie
		~ClapTrap();
		ClapTrap & operator=(const ClapTrap &src);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		const std::string 	&getName() const;
		int					getHitPoint() const;
		int					getEnergyPoint() const;
		int					getAttackDamage() const;

	protected :
		ClapTrap();
		std::string namePriv;
		int	hitPoints;
		int	energyPoints;
		int	attackDamages;
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & src);

#endif
