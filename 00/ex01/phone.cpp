/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:03 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/24 17:49:04 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

int PhoneBook::index = 0;
int PhoneBook::new_index = 0;

int main ()
{
	std::string line;
	PhoneBook book;

	while(1)
	{
		std::cout << "ADD or SEARCH or EXIT" << std::endl;
		std::getline(std::cin , line);
		if (line == "EXIT" || std::cin.eof())
			break;
		else if (line == "ADD")
			PhoneBook::Add(book);
		else if (line == "SEARCH")
			PhoneBook::Search(book);
	}
}
