#include "sed.hpp"

int main(int ac, char **av)
{

	if (ac != 4)
		return (std::cout << "need more arguments", 1);

	
	sed(av);


}
