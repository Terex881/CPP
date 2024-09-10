#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string set_name):name(set_name), hitPoints(10), energyPoints(10), attackDammage(0)
{
	// this->name = set_name;
	// this->attackDammage = 0;
	// this->hitPoints = 10;
	// this->energyPoints = 10;

	std::cout << "ClapTrap Constructor for the name " <<  this->name <<  " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor for " << this->name << " called" << std::endl;

}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	// std::cout << "ClapTrap Assignation operator called" << std::endl;

	if(this == &src)
		return *this;

	this->name = src.name;
	this->attackDammage = src.attackDammage;
	this->energyPoints = src.energyPoints;
	this->hitPoints = src.hitPoints;

	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	// std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is not able to attack " << target \
			<< ", because he has no energy points left." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attackDammage  << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead or out of energy" << std::endl;
		return;
	}
	if (amount > this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name <<  " is not able to repair itself, because he's dead or he doesn't have enough energy points." << std::endl;
		return;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " has been repaired with " << amount << " energy points" << std::endl;
}

// int ClapTrap::getAttackDammage()
// {
// 	return this->attackDammage;
// }

// int ClapTrap::getEnergyPoints()
// {
// 	return  this->energyPoints;
// }

// int ClapTrap::getHitPoints()
// {
// 	return this->hitPoints;
// }

// void ClapTrap::setHitPoints(int hitPoints)
// {
// 	this->hitPoints = hitPoints;
// }

// void ClapTrap::setEnergyPoints(int energyPoints)
// {
// 	this->energyPoints = energyPoints;
// }

// void ClapTrap::setAttackDammage(int attackDammage)
// {
// 	this->attackDammage = attackDammage;
// }

// void ClapTrap::setName(std::string name)
// {
// 	this->name = name;
// }

// std::string ClapTrap::getName()
// {
// 	return this->name;
// }
