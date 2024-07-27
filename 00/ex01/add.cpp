/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:48:57 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 11:27:35 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


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

int CheckEmpty(Contact *person, int i)
{
	if (person[i].GetFirst().empty() || !OnlySpaces(person[i].GetFirst()))
		return (1);
	if (person[i].GetLast().empty() || !OnlySpaces(person[i].GetLast()))
		return (1);
	if (person[i].GetNick().empty() || !OnlySpaces(person[i].GetNick()))
		return (1);
	if (person[i].GetNumber().empty() || !OnlySpaces(person[i].GetNumber()))
		return (1);
	if (person[i].GetSecret().empty() || !OnlySpaces(person[i].GetSecret()))
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

	if (CheckEmpty(book.person, book.index) == 0)
	{
		book.new_index++;
		book.index++;
	}
}
