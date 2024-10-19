/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:18 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/01 08:49:49 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << "FragTrap Deconstructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->attackDammage = 30;
	this->energyPoints = 100;
	this->hitPoints = 100;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	if (this == &copy)
		return *this;
	this->name = copy.name;
	this->attackDammage = copy.attackDammage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap from ClapTrap " << this->name << " says: HIGH FIVE EVERYONE!" << std::endl;
}
