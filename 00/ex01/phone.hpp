#ifndef PHONE_HPP
# define PHONE_HPP

#include <iostream>

#include <string>
#include <iomanip>





class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook
{
	public:
		Contact arr[8];
		static int index;
		static int new_index;
};


void	Add(PhoneBook& person);
void	Search(PhoneBook person);

#endif
