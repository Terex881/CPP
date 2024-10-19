/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:04:04 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/29 16:23:40 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap c;
	ScavTrap d("Savage");

	c.attack("CloneTrap");
	c.beRepaired(22);
	c.guardGate();
	d.attack("Savage-clone");
	d.takeDamage(15);
	d.attack("ScavTrap-clone");
	return (0);
}
