/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:52:43 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/28 13:53:04 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::~Point() {}

// Point &Point::operator=(Point const &copy)
// {
// 	(void)copy; // check this
// 	return *this;
// }

Point::Point(const Point &src): x(src.x), y(src.y)
{

}

float Point::getX() const
{
	return this->x.toFloat();
}

float Point::getY() const
{
	return this->y.toFloat();
}

