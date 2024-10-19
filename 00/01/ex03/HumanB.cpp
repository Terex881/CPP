/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:05 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 16:19:03 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string set_name) : name(set_name), weaponB(nullptr)
{}

void HumanB::attack()
{
	if (weaponB != nullptr)
		std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& new_weapon)
{
	weaponB = &new_weapon;
}
