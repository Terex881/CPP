/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:43:57 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/04 11:38:01 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int> arri(4);
		Array<float> arrf(4);
		
		for(int i = 0; i < 4; i++)
		{
			arri[i] = i;
			arrf[i] = i + 0.5;
		}
		for(int i = 0; i < 4; i++)
		{
			std::cout << arri[i] << std::endl;
		}
		std::cout << std::endl;
		for(int i = 0; i < 4; i++)
		{
			std::cout << arrf[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}