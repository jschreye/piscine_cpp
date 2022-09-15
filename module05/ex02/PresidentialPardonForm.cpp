#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    AForm::setName(target);
    AForm::setGradeToExec(5);
    AForm::setGradeToSign(25);
    AForm::setIsSigned(false);
    std::cout << "A new PresidentialPardon has created: " << *this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.getName() << " inform you that " << AForm::getName() << " was forgiven by Zaphod Beeblebrox." << std::endl;
}