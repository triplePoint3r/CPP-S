#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command = "";
    while (true)
    {        
        std::cout << "\n\nChoose  one of the following options :" << std::endl;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";

        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD")
        {            
            phonebook.add_contact();
        }
        else if (command == "SEARCH")
        {
            phonebook.search_contact();
        }
        else if (command == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Unknown command. Use ADD, SEARCH or EXIT.\n\n";            
        }
    }
    return 0;
}