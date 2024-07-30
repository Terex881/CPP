/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:00:58 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/30 19:33:54 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (int ac, char **av)
{
	std::string line;
	PhoneBook book;
	(void)av;
	if(ac != 1)
		return (1);
	std::cout << "[ WELCOME TO MY AWESOME PHONBOOK ]" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	while(1)
	{
		std::cout << "ADD or SEARCH or EXIT" << std::endl;

		std::getline(std::cin , line);
		if (line == "EXIT" || std::cin.eof())
			break;
		else if (line == "ADD")
			book.add(book);
		else if (line == "SEARCH")
			book.search(book);

	}
}
