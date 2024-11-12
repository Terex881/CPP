/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:51:38 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/11 18:25:34 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int arr[10] = {22, 4, 66, 9, -3, 0, 42, 11, 23, 56};
	size_t len = sizeof(arr) / sizeof(int);
	try {
		std::vector<int> v (arr, arr + len);
		easyfind(v, -22);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::list<int> l(arr, arr + len);
		easyfind(l, 11);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::deque<int> a(arr, arr + len);
		easyfind(a, 111);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}