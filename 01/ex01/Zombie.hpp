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
	Zombie():n(0), name(""){}
	Zombie(std::string set_name) : name(set_name)
	{}
};







#endif
