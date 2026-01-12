/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitosant <vitosant@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:56:21 by vitosant          #+#    #+#             */
/*   Updated: 2026/01/08 13:56:25 by vitosant         ###    ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) {
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "===Default ScavTrap constructor called===" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name) {
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "===ScavTrap constructor with name called===" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other) {
	std::cout << "===ScavTrap copy constructor called===" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
	setName(other.getName());
	setHit(other.getHit());
	setEnergy(other.getEnergy());
	setAttack(other.getAttack());
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "==ScavTrap destructor called===" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << getName() << " on Gate keeper mode" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
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
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "
			<< getAttack() << " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
}
