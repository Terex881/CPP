#include "main.hpp"


std::string set_input(std::string message)
{
	std::string line;

	std::cout << message;
	std::getline(std::cin, line);

	while (line.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << message;
		std::getline(std::cin, line);
	}
	return line;
}

void ft_add(PhoneBook& person)
{
	int new_index = person.index;

	person.arr[new_index].first_name = set_input("first name : ");
	person.arr[new_index].last_name = set_input("last name : ");
	person.arr[new_index].nick_name = set_input("nick name : ");
	person.arr[new_index].phone_number = set_input("phone number : ");
	person.arr[new_index].darkest_secret = set_input("darkest secret : ");

	person.index++;

}
