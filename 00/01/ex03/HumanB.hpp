/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:08 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 16:19:31 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weaponB;

	public:
		HumanB(std::string set_name);
		void attack();
		void setWeapon(Weapon& new_weapon);
};

#endif
