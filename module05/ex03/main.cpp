#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int    main(void)
{
    /*try
    {
        Bureaucrat chef(2, "Henry");
        ShrubberyCreationForm a1("jardin");
        chef.signForm(a1);
        chef.executeForm(a1);
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);*/
	AForm* rrf;
	AForm* pres_form;
	AForm* shrub_form;
	Intern someRandomIntern;
	Bureaucrat Boss(2, "Michel");

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		pres_form = someRandomIntern.makeForm("presidential pardon", "Bender");
		shrub_form = someRandomIntern.makeForm("shrubbery creation", "Bender");
        rrf->execute(Boss);
		Boss.signForm(*shrub_form);
        std::cout << *shrub_form << std::endl;
		shrub_form->execute(Boss);
		delete rrf;
		delete shrub_form;
		pres_form->execute(Boss);
		rrf = someRandomIntern.makeForm("robotomy request tabernaque", "Bender");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete pres_form;
	}  
}
