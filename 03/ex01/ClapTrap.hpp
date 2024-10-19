/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:04:01 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/24 16:24:37 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		int energyPoints;
		int attackDammage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);
		ClapTrap(const ClapTrap &copy);

		ClapTrap(std::string set_name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
