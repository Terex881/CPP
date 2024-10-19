/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:43 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/29 15:33:23 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap e;
	FragTrap f("Chadd");
	e.highFivesGuys();
	f.attack("some random dude");
	e.takeDamage(7);
	e.beRepaired(10);
	e.attack("some random dude");
	f.highFivesGuys();
	return (0);
}
