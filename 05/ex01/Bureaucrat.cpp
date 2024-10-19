/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:17:31 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/17 16:41:14 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy)
		this->grade = copy.grade;
	return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade() {
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &src) {
	os << src.getName() << ", bureaucrat grade." << src.getGrade();
	return os;
}
void Bureaucrat::signForm(Form &form) const {

	if (!form.getIsSigned())
	{
		if (this->grade > form.getToSign())
			std::cout << this->name << " couldn’t sign " << form.getName();
		else
		{
			std::cout << this->name << " signed " << form.getName() ;
			form.beSigned(*this);
		}
	}
	else
		std::cout << form.getName() << " already signed" << std::endl;
}