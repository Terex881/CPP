/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:40:56 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/16 10:42:44 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level) {

	std::string  kind[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while(i < 4 && kind[i] != level)
		i++;
	switch(i) {
		case(0):
			Harl::debug();
		case(1):
			Harl::info();
		case(2):
			Harl::warning();
		case(3):
			Harl::error();
			break;
		case(4):
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::debug(void) {
	std::cout <<  "[ DEBUG ]" << std::endl;

	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void) {
	std::cout <<  "[ INFO ]" << std::endl;

	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did," << std::endl;
	std::cout << "I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::error(void) {
	std::cout <<  "[ ERROR ]" << std::endl;

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void) {
	std::cout <<  "[ WARNING ]" << std::endl;

	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}
