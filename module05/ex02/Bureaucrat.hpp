#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
        public:
                Bureaucrat();
                Bureaucrat(int grade, std::string name);
                ~Bureaucrat();
                Bureaucrat(const Bureaucrat& other);

                Bureaucrat &operator=(const Bureaucrat& rhs);
                void promotion();
                void destitution();
                void signForm(Form& name);

                std::string  getName() const;
                int getGrade() const;

                class GradeTooHighException : public std::exception
                {
                        public:
                                virtual const char* what() const throw();
                };
                class GradeTooLowException : public std::exception
                {
                        public:
                                virtual const char* what() const throw();
                };

        private:
                std::string _name;
                int _grade;
};

std::ostream& operator << (std::ostream& os, Bureaucrat const & rhs);

#endif