/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:47:02 by sdemnati          #+#    #+#             */
/*   Updated: 2024/07/28 13:47:03 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>



class Fixed
{
	private:
		int fixed_point;
		static const int frac_bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);

		Fixed(const int ipnut);
		Fixed(const float input);

		float toFloat(void) const;
		int toInt(void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

		static Fixed &min(Fixed &n1, Fixed &n2);
		static const Fixed &min(const Fixed &n1, const Fixed &n2);
		static Fixed &max(Fixed &n1, Fixed &n2);
		static Fixed const &max(const Fixed &n1, const Fixed &n2);

		bool operator >(Fixed fixed) const;
		bool operator <(Fixed fixed) const;
		bool operator >=(Fixed fixed) const;
		bool operator <=(Fixed fixed) const;
		bool operator ==(Fixed fixed) const;
		bool operator !=(Fixed fixed) const;

		float operator+(Fixed fixed) const;
		float operator-(Fixed fixed) const;
		float operator*(Fixed fixed) const;
		float operator/(Fixed fixed) const;

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

};


std::ostream &operator<<(std::ostream &os ,const Fixed &src);






















#endif
