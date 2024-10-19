/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:39:48 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/15 22:47:19 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

	if (N < 0)
		return (NULL);

	Zombie* walkers = new Zombie[N];
	if (!walkers)
		return (NULL);

	for(int i = 0; i < N; i++) {
		walkers[i] = Zombie(name);
	}
	return walkers;
}
