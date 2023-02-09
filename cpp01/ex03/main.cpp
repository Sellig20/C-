/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:10:29 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/09 17:10:30 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.initWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}

// int main()
// {
//     Weapon knife = Weapon("knife");
//     HumanA elena("Elena", knife);
//     elena.attack();
//     knife.setType("sabor laser");
//     elena.attack();

//     Weapon ak47 = Weapon("ak47");
//     HumanB bonnie("Bonnie");
//     bonnie.initWeapon(ak47);
//     bonnie.attack();
//     ak47.setType("tank");
//     bonnie.attack();

//     HumanB katherine("Katherine");
//     katherine.attack();
//     Weapon poop = Weapon("poop");
//     katherine.initWeapon(poop);
//     katherine.attack();

//     return (0);
// }
