#include "Zombie.hpp"

int main()
{
    Zombie stack_zombie;
    stack_zombie.init_name("Daemon");
    stack_zombie.announce();

    Zombie *heap_zombie;
    heap_zombie = newZombie("Stephan");

    randomChump("Klaus");
    
    delete(heap_zombie);
    return (0);
}
