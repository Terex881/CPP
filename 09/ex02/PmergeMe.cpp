/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 02:54:32 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/21 11:53:20 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &src){
	*this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy){
	if (this != &copy)
	{
		this->deq = copy.deq;
		this->vec = copy.vec;
		this->odd = copy.odd;
	}
	return *this;
}

//----------------------------sort deque----------------------------

void	PmergeMe::sortPairD(std::deque<std::pair<long, long> > deq, int size){
	std::deque<long> main;
	std::deque<long> pend;
	for (std::deque<std::pair<long, long> >::iterator it = deq.begin(); it != deq.end(); it++)
		if (it->first < it->second)
			std::swap(it->first, it->second);
	insertionSort(deq);
	for (std::deque<std::pair<long, long> >::iterator it = deq.begin(); it != deq.end(); it++){
		main.insert(main.end(), it->first);
		pend.insert(pend.end(), it->second);
	}
	main.insert(main.begin(), *pend.begin());
	for(std::deque<long>::iterator it = ++pend.begin(); it != pend.end(); it++){
		std::deque<long>::iterator lower = std::lower_bound(main.begin(), main.end(), *it);
		main.insert(lower, *it);
	}
	if (odd != -1){
		std::deque<long>::iterator lower = std::lower_bound(main.begin(), main.end(), odd);
		main.insert(lower, odd);
	}
	std::cout << "Time to process a range of "<< size << " elements with std::deque  : ";
}

//----------------------------deque's costructor----------------------------

PmergeMe::PmergeMe(char **av, int f){
	(void)f;
	parseNumbers(av);
	odd = -1;
	size_t i = 1;
	while(av[i])
	{	
		if (i != 1 && i % 2 == 0)
		{
			long l = atol(av[i-1]);
			long k = atol(av[i]);
			deq.push_back(std::make_pair(l, k));
		}	
		i++;
	}
	if ((i - 1) % 2 != 0)
		odd = atol(av[i - 1]);
	sortPairD(deq, i - 1);
}

//----------------------------main deque's sort----------------------------

void	PmergeMe::insertionSort(std::deque<std::pair<long, long> > &arr){
	int n = arr.size();
	for (int i = 1; i < n; ++i)
	{
		long key = arr[i].first;
		long val = arr[i].second;
		
		int j = i - 1;	
		while (j >= 0 && arr[j].first > key)
		{
			arr[j + 1].first = arr[j].first;
			arr[j + 1].second = arr[j].second;
			j--;
		}
		arr[j + 1].first = key;
		arr[j + 1].second = val;
	}
}

//----------------------------argument's parsing----------------------------

void	PmergeMe::parseNumbers(char **av){
	char *end;
	size_t i = 1;
	while(av[i])
	{
		std::string str = av[i];
		if (str.empty() || str.find_first_not_of("1234567890+") != std::string::npos)	
			throw std::runtime_error("Error: empty argument or unkown character");
		long k = strtod(av[i], &end);
		if (*end || k > INT_MAX || k < INT_MIN)
			throw std::runtime_error("Error: invalid number");	
		i++;
	}
	if (i - 1 <= 1)
		throw std::invalid_argument("Error: 2 numbers required or more");
}

//----------------------------vector's costructor----------------------------

PmergeMe::PmergeMe(char **av){
	parseNumbers(av);
	odd = -1;
	size_t i = 1;
	while(av[i])
	{	
		if (i != 1 && i % 2 == 0)
		{
			long l = atol(av[i-1]);
			long k = atol(av[i]);
			vec.push_back(std::make_pair(l, k));
		}	
		i++;
	}
	if ((i - 1) % 2 != 0)
		odd = atol(av[i - 1]);
	sortPairV(vec, i - 1);
}

//----------------------------main vector's sort----------------------------

void	PmergeMe::insertionSort(std::vector<std::pair<long, long> > &arr){
	int n = arr.size();
	for (int i = 1; i < n; ++i)
	{
		long key = arr[i].first;
		long val = arr[i].second;
		
		int j = i - 1;	
		while (j >= 0 && arr[j].first > key)
		{
			arr[j + 1].first = arr[j].first;
			arr[j + 1].second = arr[j].second;
			j--;
		}
		arr[j + 1].first = key;
		arr[j + 1].second = val;
	}
}

//----------------------------sort vector----------------------------

void	PmergeMe::sortPairV(std::vector<std::pair<long, long> > vec, int size){
	std::vector<long> main;
	std::vector<long> pend;
	std::cout << "Before: ";
	for(std::vector<std::pair<long, long> >::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout  << it->first << " " << it->second << " ";
	if (odd != -1)
		std::cout << odd;
	for (std::vector<std::pair<long, long> >::iterator it = vec.begin(); it != vec.end(); it++)
		if (it->first < it->second)
			std::swap(it->first, it->second);
	insertionSort(vec);
	for (std::vector<std::pair<long, long> >::iterator it = vec.begin(); it != vec.end(); it++){
		main.insert(main.end(), it->first);
		pend.insert(pend.end(), it->second);
	}
	main.insert(main.begin(), *pend.begin());
	for(std::vector<long>::iterator it = ++pend.begin(); it != pend.end(); it++){
		std::vector<long>::iterator lower = std::lower_bound(main.begin(), main.end(), *it);
		main.insert(lower, *it);
	}
	if (odd != -1){
		std::vector<long>::iterator lower = std::lower_bound(main.begin(), main.end(), odd);
		main.insert(lower, odd);
	}
	std::cout << "\nafter:  ";
	for(std::vector<long>::iterator it = main.begin(); it != main.end(); it++)
		std::cout << *it << " ";	
	std::cout << "\nTime to process a range of "<< size << " elements with std::vector : ";
}