#include "harl.hpp"
#include <string>


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
		std::cout << "invalid input" << std::endl;
		return;
	}

	(this->*ptr[i])();
}


int main()
{

	Harl h;
	h.complain("DEBUG");

}
