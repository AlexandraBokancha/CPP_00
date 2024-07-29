#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "PhoneBook.hpp"

class Contact 
{
    public :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string tel;
        std::string secret;
    Contact() : first_name(""), last_name(""), nickname(""), tel(""), secret("") {}  
    // Contact(std::string first_name, std::string last_name, std::string nickname): 
    // first_name(first_name),
    // last_name(last_name),
    // nickname(nickname) {}
};

#endif