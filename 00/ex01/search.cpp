#include "main.hpp"


void  ft_set_lines(PhoneBook person, std::string word)
{
	int f_num_spc = 0;
	int i = 0;
	if (word.length() > 10)
	{
		std::cout << word.substr(0, 9);
		std::cout << ".|";

	}
	else
	{
		f_num_spc = 10 - word.length();
		while(i++ < f_num_spc)
			std::cout << " " ;
		std::cout  << word << "|";
	}
}

void ft_search(PhoneBook person)
{
	std::cout << "  index   |first name| last name| nickname |" << std::endl;
	for(int i = 0; i < person.index ; i++)
	{
		
		ft_set_lines(person, std::to_string(i));
		ft_set_lines(person, person.arr[i].first_name);
		ft_set_lines(person, person.arr[i].last_name);
		ft_set_lines(person, person.arr[i].nick_name);
		std::cout << std::endl;
	}

}
