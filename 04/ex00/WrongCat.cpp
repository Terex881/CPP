/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:49:42 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 18:27:05 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMeaw !!" << std::endl;
}