/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:48:59 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/29 18:21:37 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


// Getter fuctions
std::string Contact::getFirst()
{
	return this->first_name;
}
std::string Contact::getLast()
{
	return this->last_name;
}
std::string Contact::getNick()
{
	return this->nick_name;
}
std::string Contact::getNumber()
{
	return this->phone_number;
}
std::string Contact::getSecret()
{
	return this->darkest_secret;
}

// Setter functions
void Contact::setFirst(std::string name)
{
	this->first_name = name;
}

void Contact::setLast(std::string name)
{
	this->last_name = name;
}

void Contact::setNick(std::string name)
{
	this->nick_name = name;
}
void Contact::setNumber(std::string name)
{
	this->phone_number = name;
}
void Contact::setSecret(std::string name)
{
	this->darkest_secret = name;
}
