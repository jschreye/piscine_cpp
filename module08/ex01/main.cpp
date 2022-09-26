#include "Span.hpp"

int main()
{
    Span sp = Span(3);
    sp.addNumber(100);
    sp.addNumber(12);
    sp.addNumber(1);
    //sp.addNumberWhile(sp);
    sp.tritab();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0; 
}