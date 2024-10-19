/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:02:16 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 20:38:21 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure &src) : AMateria("cure")
{
	*this = src;
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

AMateria*::Cure::clone() const
{
	return (new Cure());
}

void  Cure::use(ICharacter &target)
{
	std::cout << "heals " << target.getName() << "’s wounds" << std::endl;
}