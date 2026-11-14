#include "Contact.hpp"

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nickname = "";
    phone = "";
    darkest_secret = "";
}
void Contact::set_contact(std::string F_name, std::string L_name , std::string Nickname , std::string Phone , std::string Darkest_secret)
{
    first_name = F_name;
    last_name = L_name;
    nickname = Nickname;
    phone = Phone;
    darkest_secret = Darkest_secret;
}

std::string  Contact::get_FName()
{
    return (first_name);
}

std::string  Contact::get_LName()
{
    return (last_name);
}

std::string Contact::get_nickname()
{
    return (nickname);
}


std::string  Contact::get_Phone()
{
    return (phone);
}

std::string Contact::get_Darkest_sec()
{
    return darkest_secret;
}

