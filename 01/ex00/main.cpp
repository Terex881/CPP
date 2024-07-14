#include "Zombie.hpp"



Zombie* newZombie( std::string name)
{
	Zombie *wlaker = new Zombie(name);
	return wlaker;
}

void randomChump( std::string name)
{
	Zombie b(name);
	b.announce();
}

int main()
{

	Zombie *a = newZombie("john");
	a->announce();
	randomChump("pp");
	delete(a);

}
