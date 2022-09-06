#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    /*const WrongAnimal* meta = new  WrongAnimal();
    //const Animal* j = new Dog();
    const  WrongAnimal* i = new WrongCat();*/

    /*
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;*/
    const Animal* j[100];
    for(size_t i = 0; i < 100; i++)
    {
        if (i < 50)
            j[i] = new Dog();
        else
            j[i] = new Cat();
    }
    j[11] = j[51];
    //j[51] = new Dog();
    j[11]->makeSound();
    j[12]->makeSound();
    for(size_t i = 0; i < 100; i++)
    {
        if (j[i])
            delete j[i];
    }
    return 0;
}