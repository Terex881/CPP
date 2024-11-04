/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:43:59 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/04 09:58:51 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> class Array
{
	private:
		T *arr;
		unsigned int _size;
	public:
		Array():arr(new T), _size(0) {}
		~Array(){delete [] arr;}

		Array(const Array &src){
			arr = NULL;
			*this = src;
		}
		Array &operator=(const Array&copy){
			if (this != &copy){
				delete [] arr;
				arr = new T[copy.size()];
				_size = copy._size;
				for(unsigned int i = 0; i < copy._size; i++)
					arr[i] = copy.arr[i];
			}
			return *this;
		}
		Array(unsigned int n){
			arr = new  T[n];
			_size = n;
		}
		T& operator[](unsigned int i)const{
			if (i >= _size)
				throw std::invalid_argument("the index is out of bounds");
			return arr[i];
		}
		size_t size() const{return _size;}
};