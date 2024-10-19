/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:27 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/15 22:43:29 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Incorrect Argument's Number" << std::endl, 1);
	if (!av[2][0])
		return (std::cout << "Empty Argument" << std::endl, 1);
	sed(av);
	return (0);
}
