/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:41:03 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/15 22:40:43 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "[ Probably complaining about insignificant problems ]" << std::endl,1);

	Harl filter;
	filter.complain(av[1]);
	return (0);
}
