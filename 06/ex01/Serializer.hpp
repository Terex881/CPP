/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:20:48 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/29 11:39:42 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
	public:
		~Serializer();
		Serializer(const Serializer &);
		Serializer &operator=(const Serializer &);
		
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);	
};