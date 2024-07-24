/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:09 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/24 17:49:10 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void  SetLines(PhoneBook person, std::string word)
{
	if (word.length() > 10)
	{
		for(int i = 0; i < 8; i++)
			std::cout << word[i];
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(9);
		std::cout  << word << "|";
	}
}

void PhoneBook::Search(PhoneBook book)
{
	int i = 0;
	std::cout << std::setw(10) << "Index|";
	std::cout << std::setw(10) << "Fname|";
	std::cout << std::setw(10) << "Lname|";
	std::cout << std::setw(10) << "Nname|" << std::endl;

	while(i < book.new_index && i < 8)
	{
		SetLines(book, std::to_string(i + 1));
		SetLines(book, book.person[i].GetFirst());
		SetLines(book, book.person[i].GetLast());
		SetLines(book, book.person[i].GetNick());
		std::cout << std::endl;
		i++;
	}
}
