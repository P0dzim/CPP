/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 19:40:55 by vitor             #+#    #+#             */
/*   Updated: 2026/01/02 20:17:46 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

Character::Character( void ) : _name(""), _freeSlots(4) {
	for (int j = 0; j < 4; j++)
		_inventory[j] = 0;
}

Character::Character( const std::string& name ) : _name(name), _freeSlots(4) {
	for (int j = 0; j < 4; j++)
		_inventory[j] = 0;
}

Character::Character( const Character& base ) : _name(base.getName()), _freeSlots(base.getFreeSlots()) {
	std::cout << "===COPY CONSTRUCTOR===" << std::endl << "memory addresses" << std::endl;
	for (int j = 0; j < 4; j++)
	{
		if (!base.getFreeSlots())
			break;
		if (base.getSlot(j))
			_inventory[j] = base.getSlot(j)->clone();
		else
			_inventory[j] = 0;
		std::cout << "BASE: " << base.getSlot(j) << " | " << "NEW: " << _inventory[j] << std::endl;
	}
}

Character::~Character( void ) {
	for (int j = 0; j < 4; j++)
	{
		if (_inventory[j])
			delete (_inventory[j]);
	}
}

Character& Character::operator=( const Character& other ) {
	_name = other.getName();
	_freeSlots = other.getFreeSlots();
	std::cout << "===ASSIGNMENT OPERATOR===" << std::endl << "memory addresses" << std::endl;
	for (int j = 0; j < 4; j++)
	{
		if (_inventory[j])
			delete (_inventory[j]);
		_inventory[j] = 0;
		if (other.getSlot(j))
			_inventory[j] = other.getSlot(j)->clone();
		std::cout << "OTHER: " << other.getSlot(j) << " | " << "ME: " << _inventory[j] << std::endl;
	}
	return (*this);
}

std::string const & Character::getName( void ) const {
	return (_name);
}

int	Character::getFreeSlots( void ) const {
	return (_freeSlots);
}

void	Character::setFreeSlots( const int freeSlots) {
	_freeSlots = freeSlots;
}

AMateria* Character::getSlot( const int idx ) const {
	if (idx < 0 || idx > 3)
		return (0);
	return (_inventory[idx]);
}

void	Character::setSlot( const int idx, AMateria* m) {
	if (idx < 0 || idx > 3)
		return ;
	for (int j = 0; j < 4; j++)
	{
		if (_inventory[j] == m)
			return ;
	}
	if (_inventory[idx])
		delete (_inventory[idx]);
	_inventory[idx] = m;
}

void	Character::equip( AMateria* m ) {
	if (!getFreeSlots())
	{
		std::cout << getName() << ": No free slots in inventory" << std::endl;
		return ;
	}
	if (!m)
	{
		std::cout << getName() << ": Invalid materia" << std::endl;
		return ;
	}
	for (int j = 0; j < 5; j++)
	{
		if (j == 4 || _inventory[j] == m)
		{
			std::cout << "Couldn't equip " << m->getType() << " materia" << std::endl;
			return ;		
		}
		if (_inventory[j])
			continue ;
		setSlot(j, m);
		break ;
	}
	setFreeSlots(getFreeSlots() - 1);
}

void	Character::unequip( int idx ) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid " << idx << " index"<< std::endl;
		return ;
	}
	if (_inventory[idx])
		setFreeSlots(getFreeSlots() + 1);
	_inventory[idx] = 0;
}

void	Character::use( int idx, ICharacter& target ) {
	if (!(idx < 0 || idx > 3) && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << getName() << ": Couldn't use item with " << idx << " index"<< std::endl;
}
