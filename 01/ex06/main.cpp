#include "Harl.hpp"

std::string  Harl::kind[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void Harl::complain(std::string level)
{
	static void (Harl::*ptr[4]) (void) = {&Harl::debug,\
		&Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while(i < 4 && kind[i] != level)
		i++;
	if (i == 4)
	{
		std::cout << " Probably complaining about insignificant problems ]" << std::endl;
		return;
	}
	switch(i)
	{
		case(0):
			Harl::debug();
		case(1):
			Harl::info();
		case(2):
			Harl::warning();
		case(3):
			Harl::error();
	}
}


int main(int ac, char **av)
{

	if (ac != 2)
		return (std::cout << " Probably complaining about insignificant problems ]" << std::endl,1);

	Harl filter;
	filter.complain(av[1]);
}
