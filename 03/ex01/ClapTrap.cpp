/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:40:39 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/01 08:49:32 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string set_name) : name(set_name), hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this == &src)
		return *this;
	this->name = src.name;
	this->attackDammage = src.attackDammage;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " is not able to attack " << target \
			<< ", because he is dead or out of energy." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attackDammage  << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		return;
	if (this->hitPoints <= 0 || this->energyPoints <= 0) {
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
	if (amount < 0)
		return;
	if (this->hitPoints <= 0 || this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->name\
		<<  " is not able to repair itself, because he's dead or he doesn't have enough energy points." << std::endl;
		return;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " has been repaired with " << amount << " energy points" << std::endl;
}
