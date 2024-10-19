/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:40:16 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/21 13:25:08 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &os ,const Fixed &src) {
	os << src.toFloat();
	return os;
}

Fixed::Fixed() : fixed_point(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called " << std::endl;
}

Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixed_point = src.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits(void) const {
	return fixed_point;
}

void Fixed::setRawBits(int raw) {
	this->fixed_point = raw;
}

float Fixed::toFloat() const {
	return ((float)this->fixed_point / (float)(1 << this->frac_bits));
}

int Fixed::toInt() const {
	return this->fixed_point >> this->frac_bits;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = n << this->frac_bits;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(f * (1 << this->frac_bits));
}
