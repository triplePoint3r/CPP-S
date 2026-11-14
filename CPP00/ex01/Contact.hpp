#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string darkest_secret;
    public:
        Contact();
        void set_contact(std::string F_name, std::string L_name , std::string Nickname , std::string Phone , std::string Darkest_secret);
        std::string get_FName();
        std::string get_LName();
        std::string get_nickname();
        std::string get_Phone();
        std::string get_Darkest_sec();        
};

#endif