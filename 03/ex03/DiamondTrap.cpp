/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:06 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/01 08:41:32 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
	this->name = "Default";
	this->attackDammage = FragTrap::attackDammage;
	this->hitPoints =  FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->attackDammage = FragTrap::attackDammage;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if(this == &src)
		return *this;
	ClapTrap::name = src.name + "_clap_name";
	this->name = src.name;
	this->attackDammage = src.attackDammage;
	this->energyPoints = src.energyPoints;
	this->hitPoints = src.hitPoints;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "MY NAME IS : " << this->name << " AND MY CLAPTRAP'S NAME IS : " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
