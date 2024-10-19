/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:35:14 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/17 18:07:06 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Bureaucrat bur("captain", 2);
		Intern  someRandomIntern;
		AForm*   rrf;
		// rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		bur.signForm(*rrf);
		rrf->beSigned(bur);
		bur.executeForm(*rrf);
		delete rrf;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}