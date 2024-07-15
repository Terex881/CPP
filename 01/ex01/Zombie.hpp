#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{

private:
	std::string name;
	int n;

public:
	void announce();
	Zombie();
	Zombie(std::string set_name) : name(set_name)
	{}
};




Zombie* zombieHorde(int N, std::string name);



#endif
