#include "phone.hpp"


int PhoneBook::index = 0;
int PhoneBook::new_index = 0;



int main ()
{
	std::string line;
	PhoneBook person;

	while(1)
	{
		std::cout << "ADD or SEARCH or EXIT" <<std::endl;
		std::getline(std::cin , line);
		if (line == "EXIT" || std::cin.eof())
			break;
		else if (line == "ADD")
			Add(person);
		else if (line == "SEARCH")
			Search(person);
	}
}
