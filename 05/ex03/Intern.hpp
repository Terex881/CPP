/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:46:40 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/16 19:08:42 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

using std::cout;
using std::string;
using std::endl;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &copy);

		AForm* makeForm(const string &name, const string &target);
};