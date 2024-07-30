/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:03 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/30 19:37:26 by sdemnati         ###   ########.fr       */
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

	book.person[book.index].setFirst(this->setInput("first name : "));
	book.person[book.index].setLast(this->setInput("last name : "));
	book.person[book.index].setNick(this->setInput("nick name : ")) ;
	book.person[book.index].setNumber(this->setInput("phone number : ")) ;
	book.person[book.index].setSecret(this->setInput("darkest secret : ")) ;

	if (this->checkEmpty(book.person, book.index) == 0)
	{
		book.new_index++;
		book.index++;
	}
}

void  PhoneBook::setLines(std::string word)
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

void PhoneBook::printInfo(int flag)
{
	std::cout << std::setw(10) << "   Index|";
	std::cout << std::setw(10) << "FisrName|";
	std::cout << std::setw(10) << "LastName|";
	std::cout << std::setw(10) << "NickNmae|";

	if(flag == 2)
	{

		std::cout << std::setw(10) << "PhoneNum|";
		std::cout << std::setw(10) << "DarkSecr|";
	}
	std::cout << std::endl;
}

void PhoneBook::printFull(PhoneBook book, int n, int flag)
{
	this->setLines(book.person[n].getFirst());
	this->setLines(book.person[n].getFirst());
	this->setLines(book.person[n].getNick());
	if (flag == 1)
	{
		this->setLines(book.person[n].getNumber());
		this->setLines(book.person[n].getSecret());
	}
	std::cout << std::endl;

}

void PhoneBook::search(PhoneBook book)
{
	std::string line;
	int i = 0;
	int number;

	std::cout << "----------------------------------------" << std::endl;
	this->printInfo(1);
	std::cout << "----------------------------------------" << std::endl;

	while(i < book.new_index && i < 8)
	{
		this->setLines(std::to_string(i + 1));
		this->printFull(book, i, 2);
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
		this->printInfo(2);
		std::cout << "------------------------------------------------------------" << std::endl;
		this->setLines(std::to_string(number));
		this->printFull(book, this->index - 1, 1);
		std::cout << "------------------------------------------------------------" << std::endl;
	}
	return ;
}
