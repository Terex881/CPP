/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:35:31 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/16 19:19:00 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
		ShrubberyCreationForm();
	public:
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

		ShrubberyCreationForm(const std::string &target);
		void execute(Bureaucrat const & executor) const;
};