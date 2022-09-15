#include "AForm.hpp"

AForm::AForm()
{
	//std::cout << "A new Form has created: " << *this << std::endl;
}

AForm::AForm(const AForm& other)
{
	*this = other;
}

AForm::AForm(std::string name, size_t grade_sign, size_t grade_exec): _name(name)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw AForm::GradeTooHighException();
	else if (grade_sign > 150 || grade_exec > 150)
		throw AForm::GradeTooLowException();
	else
	{
		this->_isSigned = false;
		this->_grade_sign = grade_sign;
		this->_grade_exec = grade_exec;
		std::cout << "New Form created: " << *this << std::endl;
	}
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return(this->_name);
}

bool AForm::getIsSigned() const
{
	return(this->_isSigned);
}

int AForm::getGradeToSign() const
{
	return (this->_grade_sign);
}
            
int AForm::getGradeToExec() const
{
	return (this->_grade_exec);
}

void AForm::setIsSigned(bool result)
{
	this->_isSigned = result;
}

void AForm::setGradeToSign(size_t grade_sign)
{
	try
	{
		if (grade_sign < 1)
			throw AForm::GradeTooHighException();
		else if (grade_sign > 150)
			throw AForm::GradeTooLowException();
		else
			this->_grade_sign = grade_sign;
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void AForm::setGradeToExec(size_t grade_exec)
{
	try
	{
		if (grade_exec < 1)
			throw AForm::GradeTooHighException();
		else if (grade_exec > 150)
			throw AForm::GradeTooLowException();
		else
			this->_grade_exec = grade_exec;
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void AForm::setName(std::string name)
{
	this->_name = name;
}

void AForm::beSigned(const Bureaucrat bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() <= this->getGradeToSign())
			this->_isSigned = true;
		else
			throw AForm::GradeTooLowException();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade value to low.");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade value to high.");
}

AForm&	AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_isSigned = rhs._isSigned;
		this->_grade_sign = rhs._grade_sign;
		this->_grade_exec = rhs._grade_exec;
	}
	return (*this);
}

std::ostream& operator << (std::ostream& os, AForm const & rhs)
{
		os << rhs.getName() << std::endl;
		os << "Status signed : " << rhs.getIsSigned() << std::endl;
		os << "Min to signed : " << rhs.getGradeToSign() << std::endl;
		os << "Min to exec : " << rhs.getGradeToExec() << std::endl;
		return(os);
}