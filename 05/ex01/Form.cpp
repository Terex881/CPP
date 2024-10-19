/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 09:04:59 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/17 17:39:55 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::~Form() {}

Form::Form(const Form &src) : name(src.name), isSigned(src.isSigned), toSign(src.toSign), toExec(src.toExec) {}

Form &Form::operator=(const Form &copy) {
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return *this;
}

Form::Form(const std::string name, int tosign, int toexec)
	: name(name), toSign(tosign), toExec(toexec)
{
	if (tosign > 150 || toexec > 150)
		throw Form::GradeTooLowException();
	if (tosign < 1 || toexec < 1)
		throw Form::GradeTooHighException();
	this->isSigned =  false;
}

void Form::beSigned(const Bureaucrat &bur) {
	if (bur.getGrade() > this->toSign)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &src) {
	os << "Form " << src.getName() << " to be signed: " << src.getToSign() \
		<< " and to be executed: " << src.getToExec();
	if (src.getIsSigned())
		std::cout << " and is signed";
	else
		std::cout << " and isn't signed";
	return os;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const std::string Form::getName() const {
	return name;
}

int Form::getToExec() const {
	return toExec;
}

int Form::getToSign() const {
	return toSign;
}

bool Form::getIsSigned() const {
	return isSigned;
}