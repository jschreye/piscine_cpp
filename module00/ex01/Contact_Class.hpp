#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void        display_four_index(int i);
        void        display_all(void);
        void        putdata(int c);
        int         index;

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        void        _checklength(std::string *str);
        
};
#endif
