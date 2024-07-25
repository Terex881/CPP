/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:09 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/25 14:47:34 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void  SetLines(std::string word)
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

void PrintInfo(int flag)
{
	std::cout << std::setw(10) << "   Index|";
	std::cout << std::setw(10) << "FisrName|";
	if (flag == 1)
	{
		std::cout << std::setw(10) << "LastName|";
		std::cout << std::setw(10) << "NickNmae|" << std::endl;
	}
	else if(flag == 2)
	{
		std::cout << std::setw(10) << "LastName|";
		std::cout << std::setw(10) << "NickNmae|";
		std::cout << std::setw(10) << "PhoneNum|";
		std::cout << std::setw(10) << "DarkSecr|" << std::endl;
	}
}

void PhoneBook::print2(PhoneBook book, int n, int flag)
{
	SetLines(book.person[n].GetFirst());
	SetLines(book.person[n].GetLast());
	SetLines(book.person[n].GetNick());
	if (flag == 1)
	{
		SetLines(book.person[n].GetNumber());
		SetLines(book.person[n].GetNick());
	}
	std::cout << std::endl;

}

void PhoneBook::Search(PhoneBook book)
{
	std::string line;
	int i = 0;
	int number;

	std::cout << "----------------------------------------" << std::endl;
	PrintInfo(1);
	std::cout << "----------------------------------------" << std::endl;

	while(i < book.new_index && i < 8)
	{
		SetLines(std::to_string(i + 1));
		print2(book, i, 2);
		std::cout << "----------------------------------------" << std::endl;
		i++;
	}
	if (book.index > 0)
	{
		std::cout << "PLEASE ENTER THE INDEX" << std::endl;
		std::cout << "Index :";

		std::getline(std::cin, line);
		number = std::atoi(line.c_str());
		if (number > 8 || number > book.new_index || number <= 0)
		{
			std::cout << std::endl << "THE INDEX IS OUT OF THE RANGE" << std::endl << std::endl;
			return ;
		}

		std::cout << "------------------------------------------------------------" << std::endl;
		PrintInfo(2);
		std::cout << "------------------------------------------------------------" << std::endl;

		SetLines(std::to_string(number));
		print2(book, number - 1, 1);
		std::cout << "------------------------------------------------------------" << std::endl;
	}
	return ;
}
