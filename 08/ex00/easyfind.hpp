/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:28 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/12 09:24:04 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#include <vector>
#include <list>
#include <deque>

template <typename T> void easyfind(T arr, int j){
	if (std::find(arr.begin(), arr.end(), j) == arr.end())
		throw std::invalid_argument("not found");
	std::cout << "found" << std::endl;
}