#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

Form::Form()
{
	std::cout << "A new Form has created: " << *this << std::endl;
}

Form::~Form()
{

}

Form::Form(const Form& other)
{
	*this = other;
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

std::string Form::getName() const
{
	return(this->_name);
}


const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade value to low.");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade value to high.");
}

std::ostream& operator << (std::ostream& os, Form const & rhs)
{
		os << rhs.getName() << std::endl;
		os << "Status signed : " << rhs.getIsSigned() << std::endl;
		os << "Min to signed : " << rhs.getGradeToSigne() << std::endl;
		os << "Min to exec : " << rhs.getGradeToExe() << std::endl;
		return(os);
}