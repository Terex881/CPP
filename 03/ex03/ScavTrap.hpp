#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP



#include "ClapTrap.hpp"

#include "FragTrap.hpp"



class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &src);
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string _name);

		void guardGate();
		void attack(const std::string& target);

};

#endif
