#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string set_name)
{
	this->name = set_name;
	this->attackDammage = 0;
	this->hitPoints = 10;
	this->energyPoints = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->name = src.name;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
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


}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		return;
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "beRepaired called" << std::endl;

}

int ClapTrap::getAttackDammage()
{
	return this->attackDammage;
}

int ClapTrap::getEnergyPoints()
{
	return  this->energyPoints;
}

int ClapTrap::getHitPoints()
{
	return this->hitPoints;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDammage(int attackDammage)
{
	this->attackDammage = attackDammage;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

std::string ClapTrap::getName()
{
	return this->name;
}
