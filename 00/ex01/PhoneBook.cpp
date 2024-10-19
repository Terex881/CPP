/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:03 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/15 14:47:07 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int PhoneBook::index = 0;
int PhoneBook::new_index = 0;

std::string PhoneBook::setInput(std::string message) {
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

int PhoneBook::onlySpaces(std::string line) {
	int i = 0;

	while(!line.empty() && line[i] == ' ')
		i++;
	if(!line.empty() && line[i] == '\0')
		return 0;
	return 1;
}

int PhoneBook::checkEmpty(Contact *person, int i) {

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

void PhoneBook::add(PhoneBook& book) {

	if (book.index >= 8)
		book.index = book.index - 8;

	book.person[book.index].setFirst(setInput("first name : "));
	book.person[book.index].setLast(setInput("last name : "));
	book.person[book.index].setNick(setInput("nick name : "));
	book.person[book.index].setNumber(setInput("phone number : "));
	book.person[book.index].setSecret(setInput("darkest secret : "));

	if (checkEmpty(book.person, book.index) == 0) {
		book.new_index++;
		book.index++;
	}
}

void  PhoneBook::setLines(std::string word) {

	if (word.length() > 10) {
		for(int i = 0; i < 9; i++)
			std::cout << word[i];
		std::cout << ".|";
	}
	else {
		std::cout << std::setw(10);
		std::cout << word << "|";
	}
}

void PhoneBook::printTitle(PhoneBook book) {

	int i = 0;
	std::stringstream ss;

	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::setw(11) << "   Index|";
	std::cout << std::setw(11) << "Fisrt Name|";
	std::cout << std::setw(11) << "Last Name|";
	std::cout << std::setw(11) << "Nick Name|" << std::endl;

	while(i < book.new_index && i < 8) {
		ss.str("");
		ss << i + 1;
		setLines(ss.str());
		printFull(book, i, 2);
		std::cout << std::endl << "--------------------------------------------" << std::endl;
		i++;
	}
}

void PhoneBook::printFull(PhoneBook book, int n, int flag) {

	if (flag == 2) {
		setLines(book.person[n].getFirst());
		setLines(book.person[n].getLast());
		setLines(book.person[n].getNick());
	}
	else if(flag == 1) {
		std::cout << "First name   : " << book.person[n].getFirst() << std::endl;
		std::cout << "Last name    : " << book.person[n].getLast() << std::endl;
		std::cout << "Nick name    : " << book.person[n].getNick() << std::endl;
		std::cout << "Number phone : " << book.person[n].getNumber() << std::endl;
		std::cout << "Dark secret  : " << book.person[n].getSecret() << std::endl;
	}
}

int PhoneBook::checkIndex(std::string line)
{
	int i = 0;
	int n = 0;
	while(!line.empty() && line[i]) {
		if (!(line[i] == 32 || (line[i] >= 9 && line[i] <= 13)))
			n++;
		i++;
	}
	if (n != 1)
		return (1);
	return (0);
}

void PhoneBook::search(PhoneBook book) {

	std::string line;
	int number = 0;

	if (book.index == 0) {
		std::cout << "-----------[ THE PHONEBOOK IS EMPTY ]-----------" << std::endl;
		return;
	}
	printTitle(book);
	std::cout << "PLEASE ENTER THE INDEX : " ;
	std::getline(std::cin, line);
	if (checkIndex(line)) {
		std::cout << std::endl << "THE INDEX IS OUT OF THE RANGE OR INCORRECT" << std::endl << std::endl;
		return;
	}
	number = std::atoi(line.c_str());
	if (number > 8 || number > book.new_index || number <= 0) {
		std::cout << std::endl << "THE INDEX IS OUT OF THE RANGE OR INCORRECT" << std::endl << std::endl;
		return ;
	}
	printFull(book, number - 1, 1);
}
