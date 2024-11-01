/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:20:43 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/30 15:04:06 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data *d = new Data;
    d->n = 10;
    d->name = "Terex";

    uintptr_t p =  Serializer::serialize(d);
    Data *d1 = Serializer::deserialize(p);

    std::cout << d1->n << std::endl;
    std::cout << d1->name << std::endl;
    
    return (0);
}