/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:54:29 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/21 10:53:08 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac <= 2)
			throw std::runtime_error("Error: 2 numbers required");
		{
			clock_t t = clock();
			PmergeMe a(av);
			t = clock() - t;
			std::cout << std::fixed << std::setprecision(5);
			std::cout << ((double)t)/CLOCKS_PER_SEC << " us" << std::endl;
		}
		{
			clock_t t = clock();
			PmergeMe a(av, 1);
			t = clock() - t;
			std::cout << std::fixed << std::setprecision(5);
			std::cout << ((double)t)/CLOCKS_PER_SEC << " us" << std::endl;
		}
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}