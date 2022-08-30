#include "HumanAClass.hpp"
#include "HumanBClass.hpp"
#include "WeaponClass.hpp"

int main()
{
    {
        Weapon club =  Weapon("batte");

        HumanA Jimmy("Jimmy", club);
        Jimmy.attack();
        club.setType("brosse a dents");
        Jimmy.attack();
    }
    {
        Weapon club =  Weapon("batte");

        HumanB Bastian("Bastian");
        Bastian.setWeapon(club);
        Bastian.attack();
        club.setType("dentifrice");
        Bastian.attack();
    }
    return (0);
}
