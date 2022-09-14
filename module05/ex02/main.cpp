#include "Bureaucrat.hpp"
#include "Form.hpp"

int    main(void)
{
    try
    {
        Bureaucrat chef(101, "Henry");
        std::cout << chef << std::endl;
        Form a1("a1", 50, 100);
        std::cout << a1 << std::endl;
        chef.signForm(a1);
        a1.beSigned(chef);
        chef.signForm(a1);
        a1.beSigned(chef);


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
