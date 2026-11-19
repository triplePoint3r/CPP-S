#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
    next_index = 0;
}

void PhoneBook::add_contact()
{
    std::string fname, lname, nickname, phone, darksec;

    std::cout<<"enter First name :";
    std::getline(std::cin, fname);
    
    std::cout<<"enter Last name :";
    std::getline(std::cin, lname);

    std::cout<<"enter Nick name :";
    std::getline(std::cin, nickname);

    std::cout<<"enter Phone :";
    std::getline(std::cin, phone);

    std::cout<<"enter Dark Secret :";
    std::getline(std::cin, darksec);

    if (fname.empty() || lname.empty() || nickname.empty() || phone.empty() || darksec.empty())
    {
        std::cout << "inavlid input \n";
        return;
    }        

    contacts[next_index].set_contact(fname, lname, nickname, phone , darksec);
    if (count < 8)
        count++;
    next_index = (next_index + 1) % 8;
}

std::string PhoneBook::FormatColumn(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::print_table()
{
    std::cout << std::right;
    std::cout << std::setw(10) << "Index"      << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name"  << "|"
              << std::setw(10) << "Nickname"
              << std::endl;              
    for (int i = 0 ; i < count ; i++)
    {
        std::cout << std::right;
        std::cout << std::setw(10) << i << "|"
              << std::setw(10) << FormatColumn(contacts[i].get_FName()) << "|"
              << std::setw(10) << FormatColumn(contacts[i].get_LName())  << "|"
              << std::setw(10) << FormatColumn(contacts[i].get_nickname()) << '\n';              
    }
    
}

void PhoneBook::search_contact()
{
    if (count == 0)
    {
        std::cout << "PhoneBook is empty.\n";
        return;
    }
    print_table();
    
    std::cout << "\nEnter index: ";
    std::string input;
    std::getline(std::cin, input);

    if (input.empty() || input.length() > 1 || (input[0] < '0' || input[0] > '7') || input[0] >= (count + '0'))
    {
        std::cout << "Invalid index.\n";
        return;
    }
    
    std::cout << contacts[input[0] - '0'].get_FName() << std::endl
              << contacts[input[0] - '0'].get_LName() << std::endl
              << contacts[input[0] - '0'].get_nickname() << std::endl
              << contacts[input[0] - '0'].get_Phone() << std::endl
              << contacts[input[0] - '0'].get_Darkest_sec() << std::endl;
}