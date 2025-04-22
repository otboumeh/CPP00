#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"



PhoneBook::PhoneBook() {
    contactCount = 0;
}

void PhoneBook::add_contact(){
	std::string first, last, nick, phone, secret;

	std::cout <<"First name :"<<std::endl;
	std::getline(std::cin ,first);

	std::cout <<"Last name :"<<std::endl;
	std::getline(std::cin ,last);

	std::cout <<"Nick name :"<<std::endl;
	std::getline(std::cin ,nick);

	std::cout <<"Phone Number :"<<std::endl;
	std::getline(std::cin ,phone);

	std::cout <<"Dark Secret :"<<std::endl;
	std::getline(std::cin ,secret);

	int index = contactCount % 8;

	contacts[index].set_contact(first, last, nick, phone, secret);

	contactCount++;
	std::cout <<"Contact Saved \n"<<std::endl;

}

void PhoneBook::search_contacts() {
    if (contactCount == 0) {
        std::cout << "No contacts to show." << std::endl;
        return;
    }

    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    int total;
	if (contactCount > 8)
    	total = 8;
	else
    total = contactCount;

    for (int i = 0; i < total; i++)
        contacts[i].display_summary(i);

    std::cout << "Enter index of contact to view details: ";
    std::string input;
    std::getline(std::cin, input);

    if (input.length() != 1 || input[0] < '0' || input[0] >= ('0' + total)) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    int index = input[0] - '0';
    contacts[index].display_full();
}

