#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>



class Zombie
{
	private:
		std::string name;

	public:
		void announce();
		Zombie(std::string set_name) : name(set_name)
		{}
		~Zombie();
};





Zombie*	newZombie( std::string name );
void	randomChump( std::string name );









#endif
