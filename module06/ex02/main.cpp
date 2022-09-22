#include <iostream>

class Base              {public: virtual ~Base(void) {}};
class A: public Base    {};
class B: public Base    {};
class C: public Base    {};

Base * generate(void)
{
    std::srand(time(NULL));
    int value = (std::rand() %3 +1);

    switch (value)
    {
        case 1:
            return new A;
            break;
        case 2:
            return new B;
            break;
        case 3:
            return new C;
            break;
        default:
            break;
    }
    return (0);
}

void identify(Base* p)
{
    A* a = dynamic_cast<A *>(p);
    B* b = dynamic_cast<B *>(p);
    C* c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "this type is A" << std::endl;
    else if (b)
        std::cout << "this type is B" << std::endl;
    else if (c)
        std::cout << "this type is C" << std::endl;
    else
        std::cout << "big probleme" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "p real type is A" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e) {}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "p real type is B" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e) {}

	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "p real type is C" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e) {}

	std::cout << "Conversion impossible" << std::endl;
}

int main()
{
    Base* a;

    a = generate();
    identify(a);
    identify(*a);
    delete a;
    return 0;
}