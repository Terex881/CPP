/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:48:49 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/24 18:50:41 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include <string>


int main(int ac, char **av)
{
	int i = 1;
	size_t j;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (ac > 1)
	{
		while(i < ac)
		{
			j = 0;
			std::string str = av[i];
			while(j < str.length())
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
}
