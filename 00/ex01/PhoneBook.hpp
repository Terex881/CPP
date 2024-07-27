/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:49:06 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/27 17:52:27 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"




class PhoneBook
{
	private:
		Contact		person[8];
		static	int	index;
		static	int	new_index;

	public:
		void	Add(PhoneBook& book);
		void	Search(PhoneBook book);

};

#endif
