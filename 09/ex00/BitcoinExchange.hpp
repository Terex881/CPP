/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:58:08 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/21 11:36:55 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, std::string> mp;
	public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &);
	BitcoinExchange &operator=(const BitcoinExchange &);

	BitcoinExchange(const std::string &arg);
	void	openFile(std::string arg, std::map<std::string, std::string> mp);
	void	getResult(std::string date, std::map<std::string, std::string>mp, double d);
	double	parseLine(std::string date, std::string value);
	void	parseDate(std::string date);
};