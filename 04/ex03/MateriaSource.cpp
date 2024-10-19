/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemnati <salaminty123@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:02:40 by sdemnati          #+#    #+#             */
/*   Updated: 2024/10/06 14:49:04 by sdemnati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete materia[i];
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this != &copy)
		for (int i = 0; i < 4; i++)
			this->materia[i] = copy.materia[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* ma)
{
	for(int i = 0; i < 4; i++)
		if (materia[i] == NULL){
			materia[i] = ma;
			return ;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (materia[i] &&  materia[i]->getType() == type)
			return (materia[i]->clone());
	return NULL;
}