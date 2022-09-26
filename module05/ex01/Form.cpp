#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

Form::Form()
{
	std::cout << "A new Form has created: " << *this << std::endl;
}

Form::Form(const Form& other)
{
	*this = other;
}

Form::Form(std::string name, size_t grade_sign, size_t grade_exec): _name(name)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	else
	{
		this->_isSigned = false;
		this->_grade_sign = grade_sign;
		this->_grade_exec = grade_exec;
		std::cout << "New Form created: " << *this << std::endl;
	}
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return(this->_name);
}

bool Form::getIsSigned() const
{
	return(this->_isSigned);
}

int Form::getGradeToSign() const
{
	return (this->_grade_sign);
}
            
int Form::getGradeToExec() const
{
	return (this->_grade_exec);
}

/*
void Form::setIsSigned(bool result)
{
	this->_isSigned = result;
}*/

void Form::beSigned(const Bureaucrat bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() <= this->getGradeToSign())
			this->_isSigned = true;
		else
			throw Form::GradeTooLowException();
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade value to low.");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade value to high.");
}

Form&	Form::operator=(const Form& rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
		this->_grade_sign = rhs._grade_sign;
		this->_grade_exec = rhs._grade_exec;
	}
	return (*this);
}

std::ostream& operator << (std::ostream& os, Form const & rhs)
{
		os << rhs.getName() << std::endl;
		os << "Status signed : " << rhs.getIsSigned() << std::endl;
		os << "Min to signed : " << rhs.getGradeToSign() << std::endl;
		os << "Min to exec : " << rhs.getGradeToExec() << std::endl;
		return(os);
}