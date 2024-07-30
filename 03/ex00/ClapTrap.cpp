#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	this->name = "default";
	this->attackDammage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string set_name)
{
	this->name = set_name;
	this->attackDammage = 0;
	this->hitPoints = 10;
	this->energyPoints = 10;
	std::cout << "ClapTrap Constructor for the name " <<  set_name << " Cody called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor for " << name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->name = src.name;
	this->attackDammage = src.attackDammage;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

void ClapTrap::attack(const std::string &target)
{

	if (this->hitPoints == 0 || this->energyPoints == 0)
		return;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDammage  << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		return;
	this->hitPoints -= amount;
	std::cout << "takeDamage called" << std::endl;
	//check overflow

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		return;
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "beRepaired called" << std::endl;

}
