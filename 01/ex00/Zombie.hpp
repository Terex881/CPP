/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:56:54 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 17:53:11 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>



class Zombie
{
	private:
		std::string name;

	public:
		void announce();
		Zombie(std::string set_name);
		~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
