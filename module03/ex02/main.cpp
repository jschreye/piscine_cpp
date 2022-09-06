#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("James");

    a.attack("Marie");
    a.takeDamage(15);
    a.beRepaired(0);
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getHitPoints() << std::endl;

    a.attack("Lili");
    a.takeDamage(15);
    a.beRepaired(0);
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getHitPoints() << std::endl;
    a.highFivesGuys();

    return (0);
}