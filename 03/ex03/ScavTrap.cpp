/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:27 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/01 08:49:56 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << "ScavTrap Deconstructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	if (this == &copy)
		return *this;
	this->name = copy.name;
	this->attackDammage = copy.attackDammage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
	return *this;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0) {
		std::cout << "ScavTrap " << this->name << " is not able to attack " << target \
			<< ", because he has no energy points left." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attackDammage  << " points of damage!" << std::endl;
	this->energyPoints--;
}
