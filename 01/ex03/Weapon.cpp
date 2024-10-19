/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:13 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/16 09:29:26 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType (){
	return this->type;
}

void Weapon::setType(std::string new_type) {
	type = new_type;
}

Weapon::Weapon(std::string type) {
	this->type = type;
}
