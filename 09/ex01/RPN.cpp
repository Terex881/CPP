/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:01:37 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/25 11:35:27 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN& src){
	*this = src;
}

RPN &RPN::operator=(const RPN &copy){ 
	if (this != &copy)
		this->stack = copy.stack;
	return *this;
}

void	RPN::addStack(std::string av){
	if (av.empty())
		throw std::runtime_error("Error: empty argument");
	int i = 0;
	int check = 0;
	while(av[i])
	{
		if (av.find_first_not_of("1234567890+-*/ ") != std::string::npos)
			throw std::runtime_error("Error: unkown character");
		if (stack.size() >= 2 && (av[i] == '+' || av[i] == '*' || av[i] == '-' || av[i] == '/'))
		{
			check = 1;
			long num2 = stack.top(); stack.pop();
			long num1 = stack.top(); stack.pop();
			if (num1 > INT_MAX || num1 < INT_MIN)
				throw std::runtime_error("Error: invalid number");
			switch (av[i])
			{
				case('+') : stack.push(num1 + num2); break;
				case('*') : stack.push(num1 * num2); break;
				case('-') : stack.push(num1 - num2); break;
				case('/') : {
					if (!num2)
						throw std::runtime_error("Error: division by 0");
					stack.push(num1 / num2);
				}
			}
		}
		else if (av[i] != 32 && std::isdigit(av[i]))
			stack.push(av[i] - 48);
		i++;
	}
	if (stack.size() != 1 || !check)
        throw std::runtime_error("Error: need an operator or size not 1");
	std::cout << stack.top() << std::endl;
}