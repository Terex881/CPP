/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:58:10 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/21 11:28:01 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy){
	if (this != &copy)
		this->mp = copy.mp;
	return *this;
}

BitcoinExchange::BitcoinExchange(const std::string &arg){
	std::string line;
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");
	getline(file, line);
	while(getline(file, line))
	{	
		if (line.find(",") != std::string::npos)
		{
			std::string date = line.substr(0, line.find(","));
			std::string value = line.substr(line.find(",") + 1, line.find("\n"));
			mp[date] = value;
		}
	}
	openFile(arg, mp);
	file.close();
}

void	BitcoinExchange::parseDate(const std::string date){
	if (date[4] != '-' || date[7] != '-' || date.length() != 10)
		throw std::invalid_argument( "Error: invalid date.");
	char real_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	for(unsigned long i = 0; i < date.length(); i++)
		if (!std::isdigit(date[i]) && date[i] != '-')
			throw std::invalid_argument("Error: invalid date.");
	int year = std::atol(date.substr(0, 4).c_str());
	int month = std::atol(date.substr(5, 2).c_str());
	int day = std::atol(date.substr(8, 2).c_str());

	if (month <= 0 || month > 12 || day <= 0)
		throw std::invalid_argument("Error: invalid date.");
	if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		real_days[1] = 29;
	if (day > real_days[month - 1])
		throw std::invalid_argument("Error: invalid date.");
}

double	BitcoinExchange::parseLine(std::string date, std::string value){
	char *end;
	double res = std::strtod(value.c_str(), &end);
	if (*value.c_str() == 32 || (end && *end))
		throw std::invalid_argument("Error: not a number.");
	if (res < 0)
		throw std::invalid_argument("Error: not a positive number.");
	if (res > 1000)
		throw std::invalid_argument("Error: too large a number.");
	parseDate(date);
	return res;
}

void	BitcoinExchange::getResult(std::string date, std::map<std::string, std::string> mp, double res){
	char *end;
	std::map<std::string, std::string>::iterator it;
	it = mp.upper_bound(date);
	if (it != mp.begin())
		it--;
	else
		throw std::invalid_argument("Error: invalid date.");
	double d = std::strtod(it->second.c_str(), &end);
	std::cout << std::fixed << std::setprecision(2);
	std::cout << date << " => " << res << " = " << res * d << std::endl;
}

void	BitcoinExchange::openFile(std::string arg, std::map<std::string, std::string> mp){
	std::string line;
	std::ifstream file(arg);
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");
	getline(file, line);
	if (line != "date | value")
		throw std::invalid_argument("Error: invalid title.");
	while(getline(file, line))
	{
		try {
			if (line.find(" | ") != std::string::npos)
			{
				std::string date = line.substr(0, line.find("|") - 1);
				std::string value = line.substr(line.find("|") + 2, line.find("\n"));
				double res = parseLine(date, value);
				getResult(date, mp, res);
			}
			else if (line.empty())
				throw std::invalid_argument("Error: empty line.");
			else
				throw std::invalid_argument("Error: bad input => " + line);
		} catch (const std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	file.close();
}