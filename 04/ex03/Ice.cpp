/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:02:24 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 20:38:26 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(const Ice &src) : AMateria("ice")
{
	*this = src;
}

Ice &Ice::operator=(const Ice &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

AMateria*::Ice::clone() const
{
	return (new Ice());
}

void  Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}