#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("bob");


    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getHitPoints() << std::endl;
    a.attack("eloise");
    a.takeDamage(a.getAttackDamage());
    a.beRepaired(2);
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getHitPoints() << std::endl;

    return (0);
}