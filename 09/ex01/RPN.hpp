/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <sdemnati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:01:39 by sdemnati          #+#    #+#             */
/*   Updated: 2024/11/19 11:00:37 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::stack<long> stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN&);
		RPN &operator=(const RPN &);
		void	addStack(std::string av);
};