/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:30:41 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/08 13:07:50 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << this->type << " constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " Destructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	this->brain = NULL;
	*this = src;
}

Cat &Cat::operator=(const Cat &copy)
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

std::string Cat::getType() const
{
	return this->type;
}

void Cat::makeSound() const
{
	std::cout << "Meaw !!" << std::endl;
}