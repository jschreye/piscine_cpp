#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class AForm;

class Intern
{
        public:
                Intern();
                Intern(const Intern& intern);
                Intern &operator=(const Intern& rhs);
                ~Intern();

                AForm *makeForm(const std::string &name, const std::string &form);

};

struct FormType
{
	std::string	name;
	AForm		*form;
};

#endif