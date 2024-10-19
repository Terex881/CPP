/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:00 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 15:45:34 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string set_name, Weapon &set_weapon) : name(set_name), weaponA(set_weapon)
{}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}
