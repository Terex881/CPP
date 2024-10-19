/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:52:43 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/21 11:13:03 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::~Point() {}

Point::Point(): x(0), y(0) {}

Point &Point::operator=(Point const &copy) {
	if (this != &copy)
	{
		(Fixed) this->x = copy.getX();
		(Fixed) this->y = copy.getY();
	}
	return *this;
}

Point::Point(const Point &src) : x(src.x), y(src.y) {}

Point::Point(const float f1, const float f2) : x(f1), y(f2) {}

Fixed Point::getX() const {
	return this->x;
}

Fixed Point::getY() const {
	return this->y;
}
