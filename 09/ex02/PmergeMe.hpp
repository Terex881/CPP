/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:54:34 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/21 11:53:08 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <iomanip>
 
using namespace std;

class PmergeMe
{
	private:
		long odd;
		std::vector<std::pair<long, long> > vec;
		std::deque<std::pair<long, long> > deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe&);
		PmergeMe &operator=(const PmergeMe&);

		PmergeMe(char **arg, int);
		PmergeMe(char **arg);
		void	sortPairV(std::vector<std::pair<long, long> > vec, int size);
		void	sortPairD(std::deque<std::pair<long, long> > vec, int size);
		void	insertionSort(std::vector<std::pair<long, long> > &arr);
		void	insertionSort(std::deque<std::pair<long, long> > &arr);
		void	parseNumbers(char **av);
};