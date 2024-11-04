/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:23:13 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/03 17:50:56 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>	void swap(T &a,T &b){
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>	T min(T a, T b){
	if (a == b)
		return b;
	return a < b ? a: b;
}

template <typename T>	T max(T a, T b){
	if (a == b)
		return b;
	return a > b ? a: b;
}