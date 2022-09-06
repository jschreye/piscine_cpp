#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("vivien");
    //ScavTrap b("Vivien");
    //ScavTrap c(a);

    //a = b;
    a.attack("Eloise");
    a.takeDamage(10);
    a.beRepaired(0);
    std::cout << "reste ";
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << "point d energy\n";
    std::cout << "reste ";
    std::cout << a.getHitPoints() << std::endl;
        std::cout << "point de vie\n";
    a.guardGate();
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getHitPoints() << std::endl;
    a.attack("Lili");
    a.takeDamage(10);
    a.beRepaired(40);
    std::cout << a.getEnergyPoints() << std::endl;
    std::cout << a.getHitPoints() << std::endl;
    return (0);
}