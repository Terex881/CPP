#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP



#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &src);
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);
		void guardGate();
		void attack(const std::string& target);





};

#endif
