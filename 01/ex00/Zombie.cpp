#include "Zombie.hpp"


void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "th e zombie has die" << std::endl;
}
