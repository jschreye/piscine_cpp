#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    AForm::setName(target);
    AForm::setGradeToExec(137);
    AForm::setGradeToSign(145);
    AForm::setIsSigned(false);
    std::cout << "A new ShrubberyCreation has created: " << *this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this != &rhs)
	{
		AForm::setIsSigned(rhs.getGradeToSign());
		AForm::setGradeToExec(rhs.getGradeToExec());
		AForm::setGradeToSign(rhs.getGradeToSign());
		AForm::setName(rhs.getName());
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    executor.getName();
}