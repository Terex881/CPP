/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:39:25 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/28 13:39:35 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int  const Fixed::frac_bits = 8;

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

Fixed	&Fixed::operator= (const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = src.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed&copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
