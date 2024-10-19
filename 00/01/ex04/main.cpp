/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:27 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 20:12:58 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"


int main(int ac, char **av)
{
	
	if (ac != 4)
		return (std::cout << "Incorrect Argument's Number", 1);
	if (!av[2][0])
		return (std::cout << "Empty Argument", 1);
	sed(av);
	return (0);


}
