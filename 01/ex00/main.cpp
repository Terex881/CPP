/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:46:53 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/15 22:46:54 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
	Zombie *a = newZombie("sakawi");
	if (!a)
		return (1);
	a->announce();
	randomChump("salah");
	delete(a);
	return (0);
}
