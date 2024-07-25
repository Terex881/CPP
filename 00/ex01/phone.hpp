/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:06 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/25 14:09:53 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

#include <iostream>
#include <string>
#include <iomanip>



class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		std::string GetFirst();
		std::string GetLast();
		std::string GetNick();
		std::string GetNumber();
		std::string GetSecret();

		void SetFirst(std::string name);
		void SetLast(std::string name);
		void SetNick(std::string name);
		void SetNumber(std::string name);
		void SetSecret(std::string name);
};

class PhoneBook
{
	private:
		Contact		person[8];
		static	int	index;
		static	int	new_index;

	public:
		static	int		CheckEmpty(PhoneBook person);
		static	void	Add(PhoneBook& person);
		static	void	Print(PhoneBook book, int i, int flag);
		static	void	Search(PhoneBook person);
		static	void	print2(PhoneBook book, int n, int flag);

};

std::string	SetInput(std::string message);


#endif
