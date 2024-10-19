/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:30:44 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 20:10:34 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << this->type << " Destructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	this->brain = NULL;
	*this = src;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
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