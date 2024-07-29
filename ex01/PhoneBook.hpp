#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <cstring> 
#include "Contact.hpp"

class PhoneBook
{
    public :
        Contact contacts[8];
        std::string cmd;
    PhoneBook() : cmd(""){}
    void add_contact();
    void search_contact();
};

#endif