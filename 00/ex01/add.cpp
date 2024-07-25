/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:48:57 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/25 14:48:12 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

std::string SetInput(std::string message)
{
	std::string line;

	std::cout << message;
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(0);
	return line;
}

int OnlySpaces(std::string line)
{
	int i = 0;

	while(!line.empty() && line[i] == ' ')
		i++;
	if(!line.empty() && line[i] == '\0')
		return 0;
	return 1;
}

int PhoneBook::CheckEmpty(PhoneBook book)
{
	if (book.person[book.index].GetFirst().empty() || !OnlySpaces(book.person[book.index].GetFirst()))
		return (1);
	if (book.person[book.index].GetLast().empty() || !OnlySpaces(book.person[book.index].GetLast()))
		return (1);
	if (book.person[book.index].GetNick().empty() || !OnlySpaces(book.person[book.index].GetNick()))
		return (1);
	if (book.person[book.index].GetNumber().empty() || !OnlySpaces(book.person[book.index].GetNumber()))
		return (1);
	if (book.person[book.index].GetSecret().empty() || !OnlySpaces(book.person[book.index].GetSecret()))
		return (1);
	else
		return (0);
}

void PhoneBook::Add(PhoneBook& book)
{
	if (book.index >= 8)
		book.index = book.index - 8;

	book.person[book.index].SetFirst(SetInput("first name : "));
	book.person[book.index].SetLast(SetInput("last name : "));
	book.person[book.index].SetNick(SetInput("nick name : ")) ;
	book.person[book.index].SetNumber(SetInput("phone number : ")) ;
	book.person[book.index].SetSecret(SetInput("darkest secret : ")) ;

	if (CheckEmpty(book) == 0)
	{
		book.new_index++;
		book.index++;
	}
}
