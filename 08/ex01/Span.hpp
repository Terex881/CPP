/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:30:46 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/11 13:28:17 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _v;
		Span();
	public:
		~Span();
		Span(const Span &);
		Span &operator=(const Span &);
		
		Span(unsigned int n);
		void addNumber(unsigned int number);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void fillSpan(std::vector<int>::iterator b, std::vector<int>::iterator e);
};