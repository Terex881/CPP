/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:39:37 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/16 08:48:21 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *walkers = zombieHorde(8, "jj");
	if (!walkers)
		return (1);

	for(int i = 0; i < 8; i++)
	{
		walkers[i].announce();
	}
	delete [] walkers;
	return (0);
}
