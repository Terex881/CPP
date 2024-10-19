#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "Default"; // check this
	this->attackDammage = FragTrap::attackDammage;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	std::cout << "DiamondTrap Constructor for " << this->_name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor for " << this->_name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->attackDammage = FragTrap::attackDammage;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;

	std::cout << "DiamondTrap Constructor for the name " << this->_name<< " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;

	if(this == &src)
		return *this;

	this->_name = src._name ;
	this->attackDammage = src.attackDammage;
	this->energyPoints = src.energyPoints;
	this->hitPoints = src.hitPoints;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = copy;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "my name is " << this->_name << \
		" and my ClapTrap's name is " << this->name << std::endl;
}

// void DiamondTrap::attack(const std::string &target)
// {
// 	ScavTrap::attack(target);
// }
