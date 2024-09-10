#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"




DiamondTrap::DiamondTrap()
{
	this->name = ClapTrap::name + "_clap_name"; // check this
	this->attackDammage = FragTrap::attackDammage;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor for " << this->name << " called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string _name)
{
	this->name = _name;
	this->attackDammage = FragTrap::attackDammage;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	// std::cout << "DiamondTrap Default Constructor called" << std::endl;


}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	// std::cout << "DiamondTrap Assignation operator called" << std::endl;

	if(this == &src)
		return *this;

	this->name = src.name;
	this->attackDammage = src.attackDammage;
	this->energyPoints = src.energyPoints;
	this->hitPoints = src.hitPoints;

	return *this;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	// std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = copy;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "my name is " << this->name << \
		" and my ClapTrap's name is " << ClapTrap::name << std::endl;
}



