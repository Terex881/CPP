#include "Zombie.hpp"




int main()
{

	Zombie *a = newZombie("john");
	a->announce();
	randomChump("pp");
	delete(a);

}
