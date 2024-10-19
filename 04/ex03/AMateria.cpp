/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:02:00 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 20:37:53 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void  AMateria::use(ICharacter &target)
{
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}