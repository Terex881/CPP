/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:03 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/13 17:48:59 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int PhoneBook::index = 0;
int PhoneBook::new_index = 0;

std::string PhoneBook::setInput(std::string message)
{
	std::string line;

	std::cout << message;
	std::getline(std::cin, line);
	int i = 0;
	while(line[i])
	{
		if (line[i] >= 9 && line[i] <= 13)
			line[i] = ' ';
		i++;
	}
	if (std::cin.eof())
		exit(0);
	return line;
}

int PhoneBook::onlySpaces(std::string line)
{
	int i = 0;

	while(!line.empty() && line[i] == ' ')
		i++;
	if(!line.empty() && line[i] == '\0')
		return 0;
	return 1;
}

int PhoneBook::checkEmpty(Contact *person, int i)
{
	if (person[i].getFirst().empty() || !onlySpaces(person[i].getFirst()))
		return (1);
	if (person[i].getLast().empty() || !onlySpaces(person[i].getLast()))
		return (1);
	if (person[i].getNick().empty() || !onlySpaces(person[i].getNick()))
		return (1);
	if (person[i].getNumber().empty() || !onlySpaces(person[i].getNumber()))
		return (1);
	if (person[i].getSecret().empty() || !onlySpaces(person[i].getSecret()))
		return (1);
	else
		return (0);
}

void PhoneBook::add(PhoneBook& book)
{
	if (book.index >= 8)
		book.index = book.index - 8;

	book.person[book.index].setFirst(setInput("first name : "));
	book.person[book.index].setLast(setInput("last name : "));
	book.person[book.index].setNick(setInput("nick name : ")) ;
	book.person[book.index].setNumber(setInput("phone number : ")) ;
	book.person[book.index].setSecret(setInput("darkest secret : ")) ;

	if (checkEmpty(book.person, book.index) == 0)
	{
		book.new_index++;
		book.index++;
	}
}

void  PhoneBook::setLines(std::string word)
{
	if (word.length() > 10)
	{
		for(int i = 0; i < 9; i++)
			std::cout << word[i];
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(10);
		std::cout  << word << "|";
	}
}

void PhoneBook::printInfo(int flag)
{
	std::cout << std::setw(11) << "   Index|";
	std::cout << std::setw(11) << "Fisrt Name|";
	std::cout << std::setw(11) << "Last Name|";
	std::cout << std::setw(11) << "Nick Name|";

	if(flag == 2)
	{

		std::cout << std::setw(11) << "Phone Num|";
		std::cout << std::setw(11) << "Dark Secr|";
	}
	std::cout << std::endl;
}

void PhoneBook::printFull(PhoneBook book, int n, int flag)
{
	setLines(book.person[n].getFirst());
	setLines(book.person[n].getLast());
	setLines(book.person[n].getNick());
	if (flag == 1)
	{
		setLines(book.person[n].getNumber());
		setLines(book.person[n].getSecret());
	}
	std::cout << std::endl;

}

void PhoneBook::search(PhoneBook book)
{
	std::string line;
	int i = 0;
	int number;

	std::cout << "--------------------------------------------" << std::endl;
	printInfo(1);
	std::cout << "--------------------------------------------" << std::endl;

	while(i < book.new_index && i < 8)
	{
		setLines(std::to_string(i + 1));
		printFull(book, i, 2);
		std::cout << "--------------------------------------------" << std::endl;
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

		std::cout << "------------------------------------------------------------------" << std::endl;
		printInfo(2);
		std::cout << "------------------------------------------------------------------" << std::endl;
		setLines(std::to_string(number));
		printFull(book, number - 1, 1);
		std::cout << "------------------------------------------------------------------" << std::endl;
	}
	return ;
}
