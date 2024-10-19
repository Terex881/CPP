/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:39:48 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 14:39:49 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"




Zombie* zombieHorde( int N, std::string name)
{


	Zombie* walkers = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		walkers[i] = Zombie(name);
	}


	return walkers;
}
