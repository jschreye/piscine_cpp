#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat chef(140, "Henry");
		chef.promotion();
        std::cout << chef << std::endl;
		chef.destitution();
		std::cout << chef << std::endl;
		Bureaucrat souschef(1, "popey");
		std::cout << souschef << std::endl;
		souschef.destitution();
		souschef.destitution();
		std::cout << souschef << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
