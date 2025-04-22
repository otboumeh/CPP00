#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{
private : 
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string	phoneNumber;
	std::string darkestSecret;
	
public :
	Contact();

	Contact(std::string f_name, std::string l_name, std::string nick, std::string phone, std::string secret);



	void set_contact(std::string f_name, std::string last_n, std::string nick, std::string phone, std::string secret);

	void display_summary(int index) const;
	void display_full() const;
	

	std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
};
#endif