#include "Zombie_Class.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* newzombie;
    newzombie = newZombie("crotte: ");
    delete newzombie;
    randomChump("pipi: ");
    return (0);
}