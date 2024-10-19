/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:01:21 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/08 13:13:47 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	const Animal* j = new Dog();
	const Animal* t = new Cat();

	delete j;
	delete t;

	Animal *arr[4];
	for(int i = 0; i < 4 ; i++)
	{
		if (i < 2)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	for (int i = 0; i < 4 ; i++)
		delete arr[i];

	return 0;
}