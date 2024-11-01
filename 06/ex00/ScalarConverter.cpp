/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:01:09 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/30 15:06:34 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy) {
	(void)copy;
	return *this;
}

int fun(std::string str) {
	if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf")
		return 0;
	if (str == "-inff" || str == "+inff")
		return -1;
	if (str == "-nan" || str == "+nan" || str == "-nanf" || str == "+nanf")
		return -2;
	return 1;
}

void print(std::string str, float d){
	if (!std::isinf(d))
	{
		if (str.find(".0f") != std::string::npos)
			std::cout << ".0";
		else if (str.find(".") == std::string::npos)
			std::cout << ".0";
	}
}

void res(std::string str, double d){
	{
		std::cout << "char: ";
		if (!fun(str))
			std::cout << "impossible" << std::endl;
		else if (d > 127 || d < 32)
			std::cout << "Non displayable" << std::endl;
		else {
			char c = static_cast<char>(d);
			std::cout << "'" << c << "'" << std::endl;
		}
	}
	{
		std::cout << "int: ";
		int n = static_cast<int>(d);
		if (n >= INT_MAX || n <= INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << n << std::endl;
	}
	{
		std::cout << "float: ";
		float c = static_cast<float>(d);
		std::cout << c;
		print(str, c);
		std::cout << "f" << std::endl;
	}
	{
		std::cout << "double: ";
		double d1 = static_cast<double>(d);
		std::cout << d1;
		print(str, d1);
		std::cout << std::endl; 
	}
}

void ScalarConverter::convert(std::string str){
	try {
		if (fun(str) == -2)
			throw std::invalid_argument("");
		if (fun(str) <= 0)
		{
			std::cout << "char: impossible\nint: impossible\nfloat: " << str;
			if (!fun(str))
				std::cout << "f" << "\ndouble: " << str << std::endl;
			else
				std::cout << "\ndouble: " << str.substr(0, str.length() - 1) << std::endl;
			return;
		}
		
		double d;
		char *end;
		d = std::strtod(str.c_str(), &end);
		if (str.length() == 1)
		{
			if (*end)
				d = *end;
		}
		else if (fun(end) && *end && (*end != 'f' || *(end+1) != '\0'))
			throw std::invalid_argument("");
		res(str, d);
	}
	catch(const std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}