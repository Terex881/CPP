#include "phone.hpp"


std::string set_input(std::string message)
{
	std::string line;

	std::cout << message;
	std::getline(std::cin, line);

	if (std::cin.eof())
		exit(0);
	return line;
}

int check_empty(PhoneBook person)
{
	if (person.arr[person.index].first_name.empty())
		return (1);
	if (person.arr[person.index].last_name.empty())
		return (1);
	if (person.arr[person.index].nick_name.empty())
		return (1);
	if (person.arr[person.index].phone_number.empty())
		return (1);
	if (person.arr[person.index].darkest_secret.empty())
		return (1);
	else
		return (0);
}

void ft_add(PhoneBook& person)
{
	// int new_index = person.index;
	if (person.index >= 8)
		person.index = person.index - 8;


	person.arr[person.index].first_name = set_input("first name : ");
	person.arr[person.index].last_name = set_input("last name : ");
	person.arr[person.index].nick_name = set_input("nick name : ");
	person.arr[person.index].phone_number = set_input("phone number : ");
	person.arr[person.index].darkest_secret = set_input("darkest secret : ");
	if (check_empty(person) == 0)
	{
		person.new_index++;
		person.index++;
	}

}
