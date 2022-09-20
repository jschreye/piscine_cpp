#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void Bureaucrat::signForm(AForm& name) // peu etre try catch
{
	try
	{
		if (name.getIsSigned() == true)
				throw Bureaucrat::SignedException();
		if (this->_grade > name.getGradeToSign())
		{
			std::cout << this->_name << " couldn't sign" << name.getName() << " because ";
			throw Bureaucrat::GradeTooLowException();
		}
		else
		{
			std::cout << this->_name << " signed " << name.getName() << std::endl;
			name.beSigned(*this);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

std::string Bureaucrat::getName() const
{
	return(_name);
}

int Bureaucrat::getGrade() const
{
	return(_grade);
}

void Bureaucrat::promotion()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
    {
        this->_grade -= 1;
        std::cout << "You have win a grade ! " << std::endl;
    }
}

void Bureaucrat::destitution()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        this->_grade += 1;
        std::cout << "You have lost a grade ! " << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{	
	try
	{
		if (form.getIsSigned() == false)
			throw Bureaucrat::SignedException();
		if (this->_grade > form.getGradeToExec())
		{
			std::cout << this->_name << " couldn't sign" << form.getName() << " because ";
			throw Bureaucrat::GradeTooLowException();
		}
		else
		{
			form.execute(*this);
			std::cout << this->_name << " executed " << form.getName() << std::endl; 
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const char* Bureaucrat::SignedException::what() const throw()
{
	return ("Exception: This document is not good");
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
