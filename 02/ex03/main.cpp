/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:45:51 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/21 11:09:06 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


int main(void)
{
	Point const a(4, 3);
	Point const b(2, 1);
	Point const c(6, 1);
	Point const p(4, 2);

	if (bsp(a, b, c, p))
		std::cout << "Point point is inside the triangle" << std::endl;
	else
		std::cout << "Point point is outside the triangle" << std::endl;
	return (0);
}
