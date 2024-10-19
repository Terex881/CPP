/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:45:58 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/28 14:01:41 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point(): x(0), y(0) {}
		Point &operator=(Point const &copy);
		Point(const Point &src);
		~Point();

		Point(const float f1, const float f2) : x(Fixed(f1)), y(Fixed(f2)) {}

		float getX() const;
		float getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
