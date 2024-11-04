/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:04:31 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/04 11:36:42 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename E> void	fun(E &e){
	std::cout << " " << e;
}

template <typename T,typename L, typename P> void	iter(T *arr, L len, void f(P&)){
	if (len <= 0 || !arr)
		return ;
	for(L i = 0; i < len; i++)
		f(arr[i]);
	std::cout << std::endl;
}