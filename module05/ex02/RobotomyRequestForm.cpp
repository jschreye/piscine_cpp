#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    AForm::setName(target);
    AForm::setGradeToExec(45);
    AForm::setGradeToSign(72);
    AForm::setIsSigned(false);
    std::cout << "A new RobotomyRequest has created: " << *this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::srand(time(0));
	int value = std::rand();

    std::cout << executor.getName() << " makes drill noise" << std::endl;
	if (value % 2 == 0)
		std::cout << this->getName() << " has been robotomized with success" << std::endl;
	else
		std::cout << this->getName() << " failled" << std::endl;
}