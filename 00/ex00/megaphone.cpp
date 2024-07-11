#include <cctype>
#include <iostream>
#include <string>


int main(int ac, char **av)
{
	int i = 1;
	int j;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; // check \n
	if (ac > 1)
	{
		while(i < ac)
		{
			j = 0;
			std::string str = av[i];
			while(j < str.length())
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
}
