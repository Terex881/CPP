/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:18:29 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/21 13:24:48 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() : fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw) {
	fixed_point = raw;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

Fixed	&Fixed::operator= (const Fixed& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixed_point = src.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed&copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
