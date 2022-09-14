#ifndef Form_HPP
# define Form_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
            Form();
            Form(std::string name, size_t grade_sign, size_t grade_exec);
            Form(const Form& other);
            ~Form();

            bool getIsSigned() const;
            int getGradeToSign() const;
            int getGradeToExec() const;
            void setIsSigned(bool result);
            std::string  getName() const;

            void beSigned(const Bureaucrat bureaucrat);

            Form &operator=(const Form& rhs);

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
            const std::string	_name;
            bool				_isSigned;
            size_t			    _grade_sign;
            size_t	            _grade_exec;

};

std::ostream& operator << (std::ostream& os, Form const & rhs);

#endif
