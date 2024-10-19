/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:35:23 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/17 18:00:22 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) \
	: AForm(src), target(src.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) \
	: AForm("RobotomyRequestForm", 72, 45), target(target) {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned())
		throw std::invalid_argument("not signed");
	if (getToExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy " << target << " failed" << std::endl;
}