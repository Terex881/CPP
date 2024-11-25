/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:58:06 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/21 11:19:50 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::invalid_argument("Error: could not open file.");
		BitcoinExchange btc(av[1]);
		
	}catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}