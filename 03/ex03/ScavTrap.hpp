/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:29 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/29 17:10:45 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
		int energyPoints;
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &src);
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);

		void guardGate();
		void attack(const std::string& target);
};

#endif
