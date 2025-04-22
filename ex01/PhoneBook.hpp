#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_CONTACTS 8
#include "Contact.hpp"
#include <iostream>


class PhoneBook{
    private :

	Contact contacts[MAX_CONTACTS];
	int contactCount;

    public :

	PhoneBook();

	void add_contact();
	void search_contacts();
};
#endif
