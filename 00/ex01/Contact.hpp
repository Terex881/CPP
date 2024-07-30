/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:34:22 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/30 19:34:23 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:

		std::string getFirst();
		std::string getLast();
		std::string getNick();
		std::string getNumber();
		std::string getSecret();

		void setFirst(std::string name);
		void setLast(std::string name);
		void setNick(std::string name);
		void setNumber(std::string name);
		void setSecret(std::string name);
};


#endif
