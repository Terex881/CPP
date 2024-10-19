/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:35:28 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/18 10:11:07 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) \
	: AForm(src), target(src.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this != &copy)
		this->target = copy.target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) \
	: AForm("ShrubberyCreationForm",145, 137), target(target) {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned())
		throw std::invalid_argument("not signed");
	if (getToExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::ofstream file(target + "_shrubbery");
	if (!file.is_open())
		throw  std::invalid_argument("open fails");
	file << "         ,@@@@@@@," << std::endl;
	file << "     ,,,.   ,@@@@@@/@@,  .oo@@@@o." << std::endl;
	file << "  ,&%&%&&%,@@@@@/@@@@@@,@@@@\\@@/@o" << std::endl;
	file << " ,%&\\%&&%&&%,@@@\\@@@/@@@@@\\@@@@@/@@'" << std::endl;
	file << " %&&%&%&/%&&%@@\\@@/ /@@@@@@@@\\@@@@@'" << std::endl;
	file << " %&&%/ %&%&&@@\\ V /@@' `@@\\@ `/@@'" << std::endl;
	file << " `&%\\ ` /%&'    |.|        \\ '|@'" << std::endl;
	file << "     |o|        | |         | |" << std::endl;
	file << "     |.|        | |         | |" << std::endl;
	file << "  \\\\/ ._\\//_/__/  ,\\_//__\\\\/." << std::endl;
	file << "###################################";
	file.close();
}