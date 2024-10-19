/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:47:06 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/21 12:19:42 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &os ,const Fixed &src) {
	os << src.toFloat();
	return os;
}

Fixed::Fixed() : fixed_point(0) {}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(Fixed const &src) {
	if (this != &src)
		this->fixed_point = src.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

int Fixed::getRawBits(void) const {
	return this->fixed_point;
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
	this->fixed_point = n << this->frac_bits;
}

Fixed::Fixed(const float f) {
	this->fixed_point = roundf(f * (1 << this->frac_bits));
}

//----------------- Comparison operators -----------------//

bool Fixed::operator!=(Fixed fixed) const {
	return (this->getRawBits() != fixed.getRawBits());
}

bool Fixed::operator==(Fixed fixed) const {
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator>(Fixed fixed) const {
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(Fixed fixed) const {
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(Fixed fixed) const {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed fixed) const {
	return (this->getRawBits() <= fixed.getRawBits());
}

//------------------ Arithmetic operators ------------------//

float Fixed::operator+(Fixed fixed) const {
	return ((float)(this->getRawBits() + fixed.getRawBits()) / (1 << this->frac_bits));
}

float Fixed::operator-(Fixed fixed) const {
	return ((float)(this->getRawBits() - fixed.getRawBits()) / (1 << this->frac_bits));

}

float Fixed::operator*(Fixed fixed) const {
	return ((float)(this->getRawBits() * fixed.getRawBits()) / ((1 << this->frac_bits) * (1 << this->frac_bits)));
}

float Fixed::operator/(Fixed fixed) const {
	return (((float)this->getRawBits() / fixed.getRawBits()));
}

//------------------ Increment/Decrement operators ------------------//

Fixed &Fixed::operator++() {
	this->fixed_point++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp=  *this;
	this->fixed_point++;
	return tmp;
}

Fixed &Fixed::operator--() {
	this->fixed_point--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->fixed_point--;
	return tmp;
}

//----------------------- Max and Min ----------------------//

Fixed &Fixed::min(Fixed &n1, Fixed &n2) {
	if(n1.getRawBits() < n2.getRawBits())
		return n1;
	else
		return n2;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2) {
	if(n1.getRawBits() < n2.getRawBits())
		return n1;
	else
		return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2) {
	if(n1.getRawBits() > n2.getRawBits())
		return n1;
	else
		return n2;
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2) {
	if(n1.getRawBits() > n2.getRawBits())
		return n1;
	else
		return n2;
}
