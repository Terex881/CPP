/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:45:51 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/28 13:49:58 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


int main(void)
{

	Point const a(6, 4);
	Point const b(10, 4);
	Point const c(8, 7);
	Point const p(7, 5.5);

    if (bsp(a, b, c, p))
        std::cout << "Point point is inside the triangle" << std::endl;
    else
        std::cout << "Point point is outside the triangle" << std::endl;
}
