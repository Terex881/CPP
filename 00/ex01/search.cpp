#include "phone.hpp"



void  ft_set_lines(PhoneBook person, std::string word)
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

void ft_search(PhoneBook person)
{
	int i = 0;
	std::cout << std::setw(10) << "Index|";
	std::cout << std::setw(10) << "Fname|";
	std::cout << std::setw(10) << "Lname|";
	std::cout << std::setw(10) << "Nname|" << std::endl;

	while(i < person.new_index && i < 8)
	{
		ft_set_lines(person, std::to_string(i + 1));
		ft_set_lines(person, person.arr[i].first_name);
		ft_set_lines(person, person.arr[i].last_name);
		ft_set_lines(person, person.arr[i].nick_name);
		std::cout << std::endl;
		i++;
	}
}
