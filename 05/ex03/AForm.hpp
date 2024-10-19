/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:09:09 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/17 14:53:01 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int toSign;
		const int toExec;
		AForm();
	public:
		virtual ~AForm();
		AForm(const AForm &src);
		AForm &operator=(const AForm &copy);

		AForm(const std::string name, const int toSign, const int toExec);
		const std::string getName() const;
		int getToSign() const;
		int getToExec() const;
		bool getIsSigned () const;
		void beSigned(const Bureaucrat &bur);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &src);