#include "ClapTrap.hpp"
#include "ScavTrap.hpp"





ScavTrap::ScavTrap()
{
	std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	(void) copy;
	return *this;
}

ScavTrap::ScavTrap(std::string name)
{
	ScavTrap::setName(name) ;
	ScavTrap::setAttackDammage(20);
	ScavTrap::setEnergyPoints(50);
	ScavTrap::setHitPoints(100);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

