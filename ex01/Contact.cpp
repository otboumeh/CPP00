#include <string>
#include <iostream>
#include <iomanip> 
#include "Contact.hpp"
Contact::Contact(){}

void Contact::set_contact(std::string f_name, std::string last_n, std::string nick, std::string phone, std::string secret)
{
	firstName = f_name;
    lastName = last_n;
    nickname = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}
std::string Contact::get_first_name() const { return firstName; }
std::string Contact::get_last_name() const { return lastName; }
std::string Contact::get_nickname() const { return nickname; }
std::string Contact::get_phone_number() const { return phoneNumber; }
std::string Contact::get_darkest_secret() const { return darkestSecret; }


std::string format_field(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::display_summary(int index) const {
    std::cout << "|" << std::setw(10) << index
              << "|" << std::setw(10) << format_field(firstName)
              << "|" << std::setw(10) << format_field(lastName)
              << "|" << std::setw(10) << format_field(nickname)
              << "|\n";
}

void Contact::display_full() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
