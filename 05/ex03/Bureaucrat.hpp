/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:35:11 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/17 14:53:10 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		Bureaucrat();
	public:
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &copy);

		Bureaucrat(const std::string name, int grade);
		std::string  getName() const;
		int  getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &form) const;
		void executeForm(AForm const & form) const ;

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &src);