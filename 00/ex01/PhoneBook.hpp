/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:06 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/15 14:45:34 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		person[8];
		static		int	index;
		static		int	new_index;

	public:
		void		add(PhoneBook& book);
		void		search(PhoneBook book);
		std::string setInput(std::string message);
		int 		onlySpaces(std::string line);
		int 		checkEmpty(Contact *person, int i);
		void		setLines(std::string word);
		void		printTitle(PhoneBook book);
		void		printFull(PhoneBook book, int n, int flag);
		int			checkIndex(std::string line);
};

#endif
