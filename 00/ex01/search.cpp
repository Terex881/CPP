#include "phone.hpp"

void  SetLines(PhoneBook person, std::string word)
{
	if (word.length() > 10)
	{
		for(int i = 0; i < 8; i++)
			std::cout << word[i];
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(9);
		std::cout  << word << "|";
	}
}

void Search(PhoneBook person)
{
	int i = 0;
	std::cout << std::setw(10) << "Index|";
	std::cout << std::setw(10) << "Fname|";
	std::cout << std::setw(10) << "Lname|";
	std::cout << std::setw(10) << "Nname|" << std::endl;

	while(i < person.new_index && i < 8)
	{
		SetLines(person, std::to_string(i + 1));
		SetLines(person, person.arr[i].first_name);
		SetLines(person, person.arr[i].last_name);
		SetLines(person, person.arr[i].nick_name);
		std::cout << std::endl;
		i++;
	}
}
