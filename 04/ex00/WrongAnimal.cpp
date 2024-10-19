/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:49:36 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/08 13:03:57 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << this->type << " Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type <<  " Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type << " makeSound. !!" << std::endl;
}