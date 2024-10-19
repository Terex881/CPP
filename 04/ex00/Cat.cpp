/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:30:41 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 17:56:20 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type << " constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " Destructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		this->type = copy.type;
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