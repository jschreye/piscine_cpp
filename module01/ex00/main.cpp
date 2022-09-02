#include "ZombieClass.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* newzombie;
    newzombie = newZombie("crotte");
    newzombie->announce();
    delete newzombie;
    randomChump("pipi");
    return (0);
}