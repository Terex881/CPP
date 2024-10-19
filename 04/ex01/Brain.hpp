/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:08:36 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/03 09:48:43 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &copy);
		~Brain();
};

#endif