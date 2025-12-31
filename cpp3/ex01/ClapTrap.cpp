/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:34:06 by vitor             #+#    #+#             */
/*   Updated: 2025/12/31 13:24:57 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) {
	_hit = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "===Default constructor called===" << std::endl;
}


ClapTrap::ClapTrap( const std::string& name ) {
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "===Constructor with name called===" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& base ) {
	_name = base.getName();
	_hit = base.getHit();
	_energy = base.getEnergy();
	_attack = base.getAttack();
	std::cout << "===Copy constructor called===" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& base ) {
	_name = base.getName();
	_hit = base.getHit();
	_energy = base.getEnergy();
	_attack = base.getAttack();
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "==Destructor called===" << std::endl;
}

std::string ClapTrap::getName( void ) const {
	return (_name);
}

int	ClapTrap::getHit( void ) const {
	return (_hit);
}

int ClapTrap::getEnergy( void ) const {
	return (_energy);
}

int ClapTrap::getAttack( void ) const {
	return (_attack);
}

void	ClapTrap::setName(const std::string& name) {
	_name = name;
}

void	ClapTrap::setHit( const int hit ) {
	_hit = hit;
}

void	ClapTrap::setEnergy( const int energy ) {
	_energy = energy;
}

void	ClapTrap::setAttack( const int attack ) {
	_attack = attack;
}

void	ClapTrap::attack( const std::string& target ) {
	if (getHit() == 0)
	{
		std::cout << getName() << " has died!" << std::endl;
		return ;
	}
	if (getEnergy() == 0)
	{
		std::cout << getName() << ':'
			<<	" Low battery!" << std::endl;
		return ;
	}
	std::cout << getName() << " attacks " << target << ", causing "
			<< getAttack() << " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	int	damage = (int) amount;

	if (getHit() == 0)
	{
		std::cout << getName() << " has died!" << std::endl;
		return ;
	}
	if (getHit() - amount <= 0)
	{	
		std::cout << getName() << ": That looks like it hurts!!" << std::endl;
		setHit(0);
		return ;
	}
	else
		std::cout << getName() << ": You can't kill me!" << std::endl;
	setHit(getHit() - damage);
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	
	if (getHit() == 0)
	{
		std::cout << getName() << " has died!" << std::endl;
		return ;
	}
	if (getEnergy() == 0)
	{
		std::cout << getName() << ':'
			<<	" Low battery!" << std::endl;
		return ;
	}
	std::cout  << getName() << ':'
			<<	" I found health!" << std::endl;
	setHit(amount);
	setEnergy(getEnergy() - 1);
}
