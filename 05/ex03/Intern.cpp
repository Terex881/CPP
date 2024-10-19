/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:05:01 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/16 18:57:39 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &src){
	*this = src;
}

Intern &Intern::operator=(const Intern &copy) {
	(void)copy;
	return *this;
}


AForm* Intern::makeForm(const string& name,const string& target)
{
	string formesName[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *formes[] = {	new ShrubberyCreationForm(target),
						new RobotomyRequestForm(target),
						new PresidentialPardonForm(target) };

	for(int i = 0; i < 3 ; i++) {
		if (formesName[i] == name)
		{
			cout << "Intern creates " << formesName[i] << endl;
			for(int  j = 0; j < 3; j++)
				if (i != j)
					delete formes[j];
			return formes[i];
		}
	}
	for(int i = 0; i < 3; i++)
		delete formes[i];
	cout << "Intern can't creates form" << endl;
	return NULL;
}