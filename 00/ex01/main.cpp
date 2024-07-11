#include "main.hpp"


int PhoneBook::index = 0;

int main ()
{
	std::string line;
	PhoneBook person;


	while(1)
	{
		std::cout << "add or search or exit" <<std::endl;
		std::getline(std::cin , line);
		if (line == "EXIT" || std::cin.eof())
			break;
		else if (line == "A")
			ft_add(person);
		else if (line == "S")
			ft_search(person);
	}
}
