/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:16:45 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/11 13:27:30 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack1;
	mstack1.push(10);
	mstack1.push(20);
	mstack1.push(30);
	mstack1.push(40);
	mstack1.push(50);
	mstack1.push(60);
	mstack1.push(70);
	
	std::cout << "-------------------TEST1-------------------\n";
	MutantStack<int>::iterator it = mstack1.begin();
	MutantStack<int>::iterator ite = mstack1.end();
	
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << "\n\n-------------------TEST2-------------------\n";
	MutantStack<int> mstack2(mstack1);
	MutantStack<int>::reverse_iterator rit = mstack2.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack2.rend();
	(*rit)++;
	while (rit != rite)
	{
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << "\n\n-------------------TEST3-------------------\n";
	MutantStack<int> mstack3 = mstack2;
	MutantStack<int>::const_iterator cit = mstack3.cbegin();
	MutantStack<int>::const_iterator cite = mstack3.cend();
	// (*cit)++;
	while (cit != cite)
	{
		std::cout << *cit << " ";
		cit++;
	}
	std::cout << std::endl;
	return 0;
}