/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:40:55 by vitor             #+#    #+#             */
/*   Updated: 2026/01/01 20:40:48 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "GarbageCollector.hpp"
#include <iostream>

Character::Character( void ) : _freeSlots(4) {
	for (int j = 0; j < 4; j++)
		_inventory[j] = 0;
}

Character::Character( const std::string& name ) : _name(name), _freeSlots(4) {
	for (int j = 0; j < 4; j++)
		_inventory[j] = 0;
}

Character::Character( const Character& base ) : _name(getName()), _freeSlots(4) {
	for (int j = 0; j < 4; j++)
	{
		if (!base.getSlot(j))
			continue ;
		if (base.getSlot(j)->getType() == "ice")
			_inventory[j] = new Ice;
		else
			_inventory[j] = new Cure;
		GarbageCollector(_inventory[j]);
	}
}

Character::~Character( void ) {}

Character& Character::operator=( const Character& other ) {
	_name = other.getName();
	_freeSlots = other.getFreeSlots();
	for (int j = 0; j < 4; j++)
		_inventory[j] = other.getSlot(j);
	return (*this);
}

std::string const & Character::getName( void ) const {
	return (_name);
}

int	Character::getFreeSlots( void ) const {
	return (_freeSlots);
}

AMateria* Character::getSlot( const int i ) const {
	return (_inventory[i]);
}

void	Character::equip( AMateria* m ) {
	if (!getFreeSlots() || !m)
		return ;
	setSlot(4 - getFreeSlots(), m);
	setFreeSlots(getFreeSlots() - 1);
}