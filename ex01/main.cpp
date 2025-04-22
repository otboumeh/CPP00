#include <iostream>
#include <string>
#include "PhoneBook.hpp"
void menu(){
	std::cout << "Please enter a command: " << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "------------------------------" << std::endl;
}
int main (int argc , char **argv){


	(void)argc;
	(void) argv;

	PhoneBook phoneBook;
	while (1){
		
		menu();
		std::string input;
		std::getline(std::cin, input);

		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			phoneBook.add_contact();
		}
		else if (input == "SEARCH")
		{
			phoneBook.search_contacts();
		}
		else {
			std::cout<<"Error give me a valid command"<<std::endl;
		}

	}
        }
