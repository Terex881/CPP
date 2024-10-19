/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:13 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 15:43:54 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"



const std::string& Weapon::getType () const
{
	return this->type;
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
