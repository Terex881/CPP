/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:05 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/16 09:31:40 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string set_name) : name(set_name), weaponB(NULL) {}

void HumanB::attack() {
	if (weaponB != NULL)
		std::cout << this->name << " attacks with their " << weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon) {
	weaponB = &new_weapon;
}
