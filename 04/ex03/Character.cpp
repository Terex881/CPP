/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:02:11 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/07 16:28:09 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	this->name = "";
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL, this->ptr[i] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		this->ptr[i] = NULL, this->inventory[i] = NULL;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if (this->ptr[i])
			delete this->ptr[i], this->ptr[i] = NULL;
}

Character::Character(const Character &src)
{
	for(int i = 0; i < 4; i++)
		this->ptr[i] = NULL, this->inventory[i] = NULL;
	*this = src;
}

Character &Character::operator=(const Character &copy)
{
	if (this != &copy){
		this->name = copy.name;
		for(int i = 0; i < 4; i++) {
			if (*this->ptr)
				delete this->ptr[i];
			this->ptr[i] =  NULL;
		}
		for(int i = 0; i < 4; i++)
			if (copy.inventory[i]) {
				this->ptr[i] = copy.inventory[i]->clone();
				this->inventory[i] = ptr[i];
			}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if(idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}

void Character::equip(AMateria *m)
{
	int n = 0;

	for(int i = 0; i < 4; i++)
		if (ptr[i] == m)
			n = 1;
	if (!n)
		for(int j = 0; j <= 3; j++){
			if (!ptr[j])
			{
				ptr[j] = m;
				break;
			}
			else if (j == 3)
				if (ptr[3])
					delete ptr[3], ptr[3]= NULL, ptr[3] = m;
		}
	for(int i = 0; i< 4; i++)
		if (!inventory[i]) {
			inventory[i] = m;
			break;
		}
}