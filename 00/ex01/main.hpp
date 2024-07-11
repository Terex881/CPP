#include <iostream>
#include <string>




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
		Contact arr[3];
		static int index;

};


void ft_add(PhoneBook& person);
void ft_search(PhoneBook person);




