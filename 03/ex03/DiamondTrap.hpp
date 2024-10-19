/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:15 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/01 08:41:22 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap &operator=(const DiamondTrap  &src);
		DiamondTrap(const DiamondTrap &copy);

		void attack(const std::string &target);
		void whoAmI();
};

#endif
