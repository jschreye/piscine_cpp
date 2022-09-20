#ifndef AForm_HPP
# define AForm_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
            AForm();
            AForm(std::string name, size_t grade_sign, size_t grade_exec);
            AForm(const AForm& other);
            virtual ~AForm();

            bool getIsSigned() const;
            int getGradeToSign() const;
            int getGradeToExec() const;
            std::string  getName() const;

            void setGradeToSign(size_t grade_sign);
            void setGradeToExec(size_t grade_exec);
            void setName(std::string name);
            void setIsSigned(bool result);

            void beSigned(const Bureaucrat bureaucrat);
            virtual void execute(Bureaucrat const & executor) const = 0;

            AForm &operator=(const AForm& rhs);

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
            std::string	        _name;
            bool				_isSigned;
            size_t			    _grade_sign;
            size_t	            _grade_exec;

};

std::ostream& operator << (std::ostream& os, AForm const & rhs);

#endif
