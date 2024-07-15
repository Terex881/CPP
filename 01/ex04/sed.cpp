#include "sed.hpp"

int sed(char **av)
{
	std::string old_word = av[2];
	std::string new_word = av[3];
	std::string file_name = av[1];
	std::string buffer;
	size_t pos;

	std::ifstream old_file(file_name);
	if (!old_file.is_open())
		return (std::cerr << "Open faild" << std::endl, 1);

	std::ofstream new_file(file_name + ".replace");
	if (!new_file.is_open())
		return (std::cerr << "Open faild" << std::endl, 1);

	while(std::getline(old_file, buffer))
	{
		pos = buffer.find(old_word);
		while (pos != std::string::npos)
		{
			buffer.erase(pos, old_word.length());
			buffer.insert(pos, new_word);
			pos = buffer.find(old_word, pos + new_word.length());
		}
		new_file << buffer << std::endl;
	}
	old_file.close();
	new_file.close();
	return (0);
}
