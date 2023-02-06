#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon knife = Weapon("knife");
    HumanA elena("Elena", knife);
    elena.attack();
    knife.setType("sabor laser");
    elena.attack();

    Weapon ak47 = Weapon("ak47");
    HumanB bonnie("Bonnie");
    bonnie.initWeapon(ak47);
    bonnie.attack();
    ak47.setType("tank");
    bonnie.attack();

    HumanB katherine("Katherine");
    katherine.attack();
    Weapon poop = Weapon("poop");
    katherine.initWeapon(poop);
    katherine.attack();

    return (0);
}