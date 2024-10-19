/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:18:42 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/18 10:09:44 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat bureaucrat("captain", 1);
		Form form("Form1", 10, 10);

		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}