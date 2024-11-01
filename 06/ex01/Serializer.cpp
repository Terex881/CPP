/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:20:46 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/30 15:07:42 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer &src) {
	*this = src;
}

Serializer &Serializer::operator=(const Serializer &copy) {
	(void)copy;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}