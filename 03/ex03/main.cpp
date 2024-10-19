/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:23 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/01 08:40:18 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a;
	a.whoAmI();
	a.beRepaired(10);
	DiamondTrap b("Giga Chadd");
	b.whoAmI();
	a.attack("some super random dude");
	b.attack("Chadd-clone");
	return (0);
}
