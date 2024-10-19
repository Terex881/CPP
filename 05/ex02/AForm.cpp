/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:35:04 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/18 10:09:59 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::~AForm() {}

AForm::AForm(const AForm &src) : name(src.name), isSigned(src.isSigned), toSign(src.toSign), toExec(src.toExec) {}

AForm &AForm::operator=(const AForm &copy) {
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return *this;
}

AForm::AForm(const std::string name, int tosign, int toexec)
	: name(name), toSign(tosign), toExec(toexec)
{
	if (tosign > 150 || toexec > 150)
		throw AForm::GradeTooLowException();
	if (tosign < 1 || toexec < 1)
		throw AForm::GradeTooHighException();
	this->isSigned =  false;
}

void AForm::beSigned(const Bureaucrat &bur) {
	if (bur.getGrade() > this->toSign)
		throw AForm::GradeTooLowException();
	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &src) {
	os << "AForm " << src.getName() << " to be signed: " << src.getToSign() \
		<< " and to be executed: " << src.getToExec();
	return os;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const std::string AForm::getName() const {
	return name;
}

int AForm::getToExec() const {
	return toExec;
}

int AForm::getToSign() const {
	return toSign;
}

bool AForm::getIsSigned() const {
	return isSigned;
}