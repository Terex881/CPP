/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:01:35 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/21 10:48:10 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	try {
		if (ac != 2)
			throw std::invalid_argument("Error: 2 arguments required or more");
		RPN rpn;
		rpn.addStack(av[1]);
	
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;	
}