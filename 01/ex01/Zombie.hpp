/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:39:45 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/29 09:32:14 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>



class Zombie
{

private:
	std::string name;
	int n;

public:
	void announce();
	Zombie();
	// Zombie(std::string set_name) : name(set_name)
	{}
};




Zombie* zombieHorde(int N, std::string name);



#endif
