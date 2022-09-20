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
    std::ofstream os;

    std::cout << executor.getName() << " create a tree!" << std::endl;
	os.open((this->getName() + "_shrubbery").c_str());
	if (!os.is_open())
		return ;
	os << "               ,@@@@@@@," << std::endl;
	os << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	os << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	os << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	os << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	os << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	os << "   `&%\\ ` /%&'  |.|          \\ '|8'" << std::endl;
	os << "       |o|        | |         | |" << std::endl;
	os << "       |.|        | |         | |" << std::endl;
	os << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	os.close();
}