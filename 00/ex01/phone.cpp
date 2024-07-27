/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:03 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 11:27:29 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = 0;
int PhoneBook::new_index = 0;

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
			book.Add(book);
		else if (line == "SEARCH")
			book.Search(book);

	}
}
