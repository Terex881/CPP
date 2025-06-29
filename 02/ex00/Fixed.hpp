/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:39:50 by sdemnati          #+#    #+#             */
/*   Updated: 2024/09/21 12:20:02 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int frac_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& src);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
