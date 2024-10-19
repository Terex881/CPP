/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:08:25 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 17:57:54 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	return *this;
}