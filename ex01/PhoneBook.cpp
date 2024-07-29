#include "PhoneBook.hpp"

void PhoneBook::add_contact()
{
    std::cout << "First name: ";
    std::getline(std::cin, PhoneBook::contacts->first_name);
    std::cout << "Last name: ";
    std::getline(std::cin, PhoneBook::contacts->last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, PhoneBook::contacts->nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, PhoneBook::contacts->tel);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, PhoneBook::contacts->secret);
    if (PhoneBook::contacts->secret.empty() || PhoneBook::contacts->tel.empty() || \
        PhoneBook::contacts->first_name.empty() || PhoneBook::contacts->last_name.empty() || \
        PhoneBook::contacts->nickname.empty())
    {
        std::cout << "\033[1;32mSorry, there is en emplty field. Please, try again.\033[0m\n";
        return ;
    }
    std::cout << "\033[1;33mYour contact is saved in this phonebook!\033[0m\n";
    return ;
}

void PhoneBook::search_contact()
{
    return ;
}