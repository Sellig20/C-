#include "Zombie.hpp"

int main()
{
    Zombie yell;
    yell.init_name("Daemon");
    yell.announce();

    Zombie *heap_zombie;
    heap_zombie = newZombie("Stephan");
    delete(heap_zombie);
    return (0);
}