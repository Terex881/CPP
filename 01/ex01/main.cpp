#include "Zombie.hpp"
#include <cstdlib>





void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



Zombie* zombieHorde( int N, std::string name)
{


	Zombie* walkers = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		walkers[i] = Zombie(name);
	}


	return walkers;
}
void ft()
{
	system("leaks Moar");
}

int main()
{
	int i = 0;
	Zombie *walkers = zombieHorde(3, "jj");
	atexit(ft);
	for(int i = 0; i < 3; i++)
	{
		walkers[i].announce();
	}
	delete [] walkers;
}
