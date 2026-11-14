#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int count;
        int next_index;
    public:
        PhoneBook();        

        void add_contact();
        void print_table();
        void search_contact();
        std::string FormatColumn(std::string str);
        
};

#endif