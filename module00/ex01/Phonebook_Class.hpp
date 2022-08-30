#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>
#include "Contact_Class.hpp"

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        void display(void);
        void display_rule(void);
        Contact contact[8];
};
#endif
