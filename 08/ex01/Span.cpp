/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:30:44 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/11 15:36:21 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span(){};

Span::Span(const Span &src){
	*this = src;
}

Span::Span(unsigned int n) : _n(n) {
	_v.reserve(n);
}

Span &Span::operator=(const Span &copy){
	if (this != &copy)
	{
		_n = copy._n;
		_v = copy._v;
	}
	return *this;
}

void Span::addNumber(unsigned int number){
	if (_v.capacity() == _v.size())
		throw std::invalid_argument("The Span is full");
	_v.push_back(number);
}

unsigned int Span::longestSpan(){
	if (_v.size() < 2)
        throw std::runtime_error("Need at least 2 numbers");  
	std::vector<int> tmp(_v);  
	sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

unsigned int Span::shortestSpan(){
	if (_v.size() < 2)
		throw std::runtime_error("Need at least 2 numbers");
	std::vector<int> tmp(_v);
	sort(tmp.begin(), tmp.end());
	unsigned int minSpan = UINT_MAX;
	std::vector<int>::iterator it = tmp.begin();
	std::vector<int>::iterator next = it + 1;
	while (next != tmp.end())
	{
		unsigned int currentSpan = *next - *it;
		if (currentSpan < minSpan)
			minSpan = currentSpan;
		it++;
		next++;
	}
	return minSpan;
}

void Span::fillSpan(std::vector<int>::iterator b, std::vector<int>::iterator e){
	if (std::distance(b, e) + _v.size() > _n)
		throw std::runtime_error("The Span doesn't have enough space");
	_v.insert(_v.end(), b, e);
}