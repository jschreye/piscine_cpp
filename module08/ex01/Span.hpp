#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span
{
    public:
        Span(unsigned int n);
        Span(const Span& span);
        Span& operator=(const Span& rhs);
        ~Span();

        void addNumberWhile(Span& span);
        void addNumber(int nbr);
        void tritab();
        int  shortestSpan();
        int  longestSpan();
        
        class InvalidSizeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

        class InvalidSizeTabException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    private:
        unsigned int _nMax;
        unsigned int _nactual;
        std::vector<int> _tab;
};

#endif