/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:30:44 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 17:56:29 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << " constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " Destructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::makeSound() const
{
	std::cout << "Woof !!" << std::endl;
}