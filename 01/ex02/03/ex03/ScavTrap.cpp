#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;

	this->name = copy.name;
	this->attackDammage = copy.attackDammage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.energyPoints;
	return *this;
}

ScavTrap::ScavTrap(std::string set_name) : ClapTrap(set_name)
{
	std::cout << "ScavTrap Constructor for the name " << this->name << " called" << std::endl;

	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name<< " is now in Gate keeper mode." << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is not able to attack " << target \
			<< ", because he has no energy points left." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attackDammage  << " points of damage!" << std::endl;
	this->energyPoints--;
}

