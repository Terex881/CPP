#include "phone.hpp"

std::string SetInput(std::string message)
{
	std::string line;

	std::cout << message;
	std::getline(std::cin, line);

	if (std::cin.eof())
		exit(0);
	return line;
}

int OnlySpaces(std::string line)
{

	int i = 0;
	while(!line.empty() && line[i] == ' ')
		i++;
	if(!line.empty() && line[i] == '\0')
		return 0;
	return 1;
}

int CheckEmpty(PhoneBook person)
{
	if (person.arr[person.index].first_name.empty() || !OnlySpaces(person.arr[person.index].first_name))
		return (1);
	if (person.arr[person.index].last_name.empty() || !OnlySpaces(person.arr[person.index].last_name))
		return (1);
	if (person.arr[person.index].nick_name.empty() || !OnlySpaces(person.arr[person.index].nick_name))
		return (1);
	if (person.arr[person.index].phone_number.empty() || !OnlySpaces(person.arr[person.index].phone_number))
		return (1);
	if (person.arr[person.index].darkest_secret.empty() || !OnlySpaces(person.arr[person.index].darkest_secret))
		return (1);
	else
		return (0);
}

void Add(PhoneBook& person)
{
	if (person.index >= 8)
		person.index = person.index - 8;

	person.arr[person.index].first_name = SetInput("first name : ");
	person.arr[person.index].last_name = SetInput("last name : ");
	person.arr[person.index].nick_name = SetInput("nick name : ");
	person.arr[person.index].phone_number = SetInput("phone number : ");
	person.arr[person.index].darkest_secret = SetInput("darkest secret : ");

	if (CheckEmpty(person) == 0)
	{
		person.new_index++;
		person.index++;
	}
}
