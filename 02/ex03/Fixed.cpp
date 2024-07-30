/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:45:23 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/28 13:59:14 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac_bits = 8;

std::ostream &operator<<(std::ostream &os ,const Fixed &src)
{
	os << src.toFloat();
	return os;
}

Fixed::Fixed() : fixed_point(0) {}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(Fixed const &src)
{
	this->fixed_point = src.getRawBits();
	return *this;
}
Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

int Fixed::getRawBits(void) const
{
	return fixed_point;
}

void Fixed::setRawBits(int raw)
{
	this->fixed_point = raw;
}


float Fixed::toFloat() const
{
	return ((float)this->fixed_point / (float)(1 << this->frac_bits));
}

int Fixed::toInt() const
{
	return this->fixed_point >> this->frac_bits;
}

Fixed::Fixed(const int n)
{

	this->fixed_point = n << this->frac_bits;
}
Fixed::Fixed(const float f)
{

	this->fixed_point = roundf(f * (1 << this->frac_bits));

}

bool Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

float Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}
float Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	this->fixed_point++;
	return *this;
}
Fixed	Fixed::operator--()
{
	this->fixed_point--;
	return *this;
}


Fixed Fixed::operator--(int)
{
	Fixed tmp =  *this;
	this->fixed_point--;
	return tmp;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp=  *this;
	this->fixed_point++;
	return tmp;
}

Fixed  &Fixed::min(Fixed &n1, Fixed &n2)
{
	if(n1.toFloat() < n2.toFloat())
		return n1;
	else
		return n2;
}

Fixed  &Fixed::max(Fixed &n1, Fixed &n2)
{
	if(n1.toFloat() > n2.toFloat()) //=
		return n2;
	else
		return n1;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if(n1.toFloat() < n2.toFloat()) // =
		return n1;
	else
		return n2;
}
const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if(n1.toFloat() > n2.toFloat()) // =
		return n1;
	else
		return n2;
}
