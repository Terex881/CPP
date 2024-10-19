/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:03:20 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/01 08:43:22 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		int attackDammage;
		unsigned int hitPoints;
	public:
		FragTrap();
		~FragTrap();
		FragTrap &operator=(const FragTrap &src);
		FragTrap(const FragTrap &copy);

		FragTrap(std::string _name);
		void highFivesGuys(void);
};

#endif
