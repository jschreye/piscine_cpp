#ifndef Form_HPP
# define Form_HPP
#include <iostream>

class Bureaucrat;

class Form
{
    public:
            Form();
            Form(int grade, std::string name);
            ~Form();
            Form(const Form& other);
            Form &operator=(const Form& rhs);
            void promotion();
            void destitution();
            std::string  getName() const;

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
