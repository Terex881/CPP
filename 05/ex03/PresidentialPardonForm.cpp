/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:35:16 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/17 18:02:59 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) \
	: AForm(src), target(src.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) \
	: AForm("PresidentialPardonForm", 25, 5), target(target) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned())
		throw std::invalid_argument("not signed");
	if (getToExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}