#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int grade, std::string name): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = grade;
		std::cout << "New bureaucrat created: " << *this << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::promotion()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
    {
        this->_grade--;
        std::cout << "You have win a grade ! " << std::endl;
    }
}

void Bureaucrat::destitution()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        this->_grade++;
        std::cout << "You have lost a grade ! " << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: The grade value is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: The grade value is too low");
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::ostream& operator << (std::ostream& os, Bureaucrat const & rhs)
{
		os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
		return(os);
}
