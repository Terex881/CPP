/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:16:42 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/11 15:38:05 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <iostream>
#include <stack>

template <typename T, typename C = std::deque<T> >  
class MutantStack : public std::stack<T, C>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &src){
			*this = src;
		}
		MutantStack &operator=(const MutantStack &copy){			
			std::stack<T, C>::operator=(copy);
			return *this;
		}		

		typedef typename C::iterator iterator;
		typedef typename C::reverse_iterator reverse_iterator;
		typedef typename C::const_iterator const_iterator;

		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		reverse_iterator rbegin(){
			return this->c.rbegin();
		}
		reverse_iterator rend(){
			return this->c.rend();
		}
		const_iterator cbegin()const{
			return this->c.cbegin();
		}
		const_iterator cend() const{
			return this->c.cend();
		}
};