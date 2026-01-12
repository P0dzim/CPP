/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:32:06 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/09 14:32:07 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

MateriaSource::MateriaSource( void ) : _freeSlots(4) {
	for (int j = 0; j < 4; j++)
		_slots[j] = 0;
}

MateriaSource::MateriaSource( const MateriaSource& base ) : _freeSlots(getFreeSlots()) {
	for (int j = 0; j < 4; j++)
	{
		if (!base.getFreeSlots())
			continue ;
		if (base.getSlot(j))
			_slots[j] = base.getSlot(j)->clone();
	}	
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete (_slots[i]);	
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {
	for (int j = 0; j < 4; j++)
	{
		if (!other.getFreeSlots())
			continue ;
		if (other.getSlot(j))
			_slots[j] = other.getSlot(j)->clone();
	}
	return (*this);
}

int	MateriaSource::getFreeSlots( void ) const {
	return (_freeSlots);
}

void	MateriaSource::setFreeSlots( const int idx ) {
	_freeSlots = idx;
}

AMateria*	MateriaSource::getSlot( const int idx ) const {
	if (idx < 0 || idx > 3)
		return (0);
	return (_slots[idx]);
}

void	MateriaSource::setSlot( const int idx, AMateria* m ) {
	if (idx < 0 || idx > 3)
		return ;
	if (_slots[idx])
		delete (_slots[idx]);
	_slots[idx] = m;
}

void	MateriaSource::learnMateria( AMateria* materia ) {
	int	idx = 5;

	if (!getFreeSlots())
	{
		std::cout << "No free slot" << std::endl;
		return ;
	}
	for (int j = 0; j < 4; j++)
	{
		if (!_slots[j] && j < idx)
			idx = j;
		if (_slots[j] == materia)
			return ;
	}
	setSlot(idx, materia);
	setFreeSlots(getFreeSlots() - 1);
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	for (int j = 0; j < 4; j++)
	{
		if (_slots[j] && _slots[j]->getType() == type)
			return (_slots[j]->clone());
	}
	std::cout << "Can't create " << type << " materia" << std::endl;
	return (0);
}
