/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_set.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:48:59 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/24 17:49:00 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

// Getter fuctions
std::string Contact::GetFirst()
{
	return this->first_name;
}
std::string Contact::GetLast()
{
	return this->last_name;
}
std::string Contact::GetNick()
{
	return this->nick_name;
}
std::string Contact::GetNumber()
{
	return this->phone_number;
}
std::string Contact::GetSecret()
{
	return this->darkest_secret;
}

// Setter functions
void Contact::SetFirst(std::string name)
{
	this->first_name = name;
}

void Contact::SetLast(std::string name)
{
	this->last_name = name;
}

void Contact::SetNick(std::string name)
{
	this->nick_name = name;
}
void Contact::SetNumber(std::string name)
{
	this->phone_number = name;
}
void Contact::SetSecret(std::string name)
{
	this->darkest_secret = name;
}
