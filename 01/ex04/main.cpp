#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>




int main(int ac, char **av)
{

	if (ac != 4)
		return 1;
	std::string buffer;
	std::ifstream myfile(av[1]);
	if (!myfile.is_open())
		return (std::cout << "No file in this name" << std::endl, 1);
	std::string old_word = av[2];
	std::string new_word = av[3];
	while(std::getline(myfile, buffer))
	{
		size_t pos = buffer.find(old_word);
		buffer.replace(pos, old_word.length(), new_word);
		std::cout << buffer;





	}


}
