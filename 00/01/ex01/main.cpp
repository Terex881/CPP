/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:39:37 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 14:39:38 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"





Zombie::Zombie()
{}

int main()
{
	Zombie *walkers = zombieHorde(3, "jj");

	for(int i = 0; i < 3; i++)
	{
		walkers[i].announce();
	}
	delete [] walkers;
}
