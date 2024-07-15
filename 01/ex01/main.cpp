#include "Zombie.hpp"





Zombie::Zombie()
{}

int main()
{
	Zombie *walkers = zombieHorde(3, "jj");

	for(int i = 0; i < 3; i++)
	{
		walkers[i].announce();
	}
	delete [] walkers;
}
