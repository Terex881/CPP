#include "ClapTrap.hpp"
#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	this->attackDammage = 30;
	this->energyPoints = 100;
	this->hitPoints = 100;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << this->name << " called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor for the name " << this->name << " called" << std::endl;

	this->attackDammage = 30;
	this->energyPoints = 100;
	this->hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;

	this->name = copy.name;
	this->attackDammage = copy.attackDammage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.energyPoints;
	return *this;
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "HHHHHHHH\n";

}
